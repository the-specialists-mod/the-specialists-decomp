#!/usr/bin/env python3
"""Parser / validator for TS 3.0 bot node files (maps/<map>.ndm).

Format (mp.dll load 0x10071cb0 / save 0x10071e60; raw dump of CNodeGraph 0x100e8330):
  int32  count                      (load rejects count >= 512 -> graph stays empty)
  count * node (20 bytes):
     float x, y, z                  node origin (player pev->origin when learned)
     int32 flags                    bit0 = learned while on a ladder (IsOnLadder 0x10033670)
     int32 reserved                 always written 0 by both creators
  count * count * link (8 bytes), row-major link[i][j] for i in 0..count, j in 0..count:
     int32 dist                     __ftol(|node_i - node_j|) (truncated 3D distance)
     uint8 connected                1 = passable, 0 = no link
     uint8 pad[3]                   uninitialised in memory -> whatever was there (0 after reset)
  file size == 4 + 20*n + 8*n*n ; little endian; no magic / version.

Usage: python3 -I scripts/ndm.py FILE_OR_DIR... [--path FILE A B] [--allpairs]
"""
import math
import os
import struct
import sys

MAX_NODES = 512


class Graph:
    def __init__(self, path):
        data = open(path, 'rb').read()
        self.path = path
        self.size = len(data)
        (self.n,) = struct.unpack_from('<i', data, 0)
        n = self.n
        expect = 4 + 20 * n + 8 * n * n
        if expect != self.size:
            raise ValueError('%s: size %d != expected %d for n=%d' % (path, self.size, expect, n))
        self.nodes = []
        off = 4
        for _ in range(n):
            x, y, z, flags, res = struct.unpack_from('<fffii', data, off)
            self.nodes.append((x, y, z, flags, res))
            off += 20
        self.dist = [[0] * n for _ in range(n)]
        self.conn = [[0] * n for _ in range(n)]
        self.pad = [[b''] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                d, c = struct.unpack_from('<iB', data, off)
                self.dist[i][j] = d
                self.conn[i][j] = c
                self.pad[i][j] = data[off + 5:off + 8]
                off += 8
        assert off == self.size

    def org(self, i):
        return self.nodes[i][:3]


def ftol(x):
    return int(x)  # MSVC __ftol truncates toward zero


def f32(x):
    return struct.unpack('<f', struct.pack('<f', x))[0]


def dist3(a, b):
    return math.sqrt((a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2 + (a[2] - b[2]) ** 2)


def find_path(g, start, goal, debug=False):
    """Exact replica of CNodeGraph::FindPath 0x100717f0 (start=arg1, goal=arg2).
    Returns (ok, list_of_node_indices start..goal, phase2_iterations)."""
    n = g.n
    if start == goal or not (0 <= goal < n) or not (0 <= start < n):
        return False, [], 0
    # scratch: rec[i] = [g, h, f, closed]  (0x20400c + i*16)
    G = [9999] * n
    H = [0] * n
    F = [0] * n
    closed = [0] * n
    stack = []
    G[start] = 0
    # phase 1: Dijkstra from start, at most 1000 iterations
    it = 0
    while True:
        u = 0
        best = 9999
        for i in range(n):
            if not closed[i] and G[i] < best:
                u, best = i, G[i]
        closed[u] = 1
        if goal == u or best == 9999:
            break
        for j in range(n):
            if g.conn[u][j] and G[j] > G[u] + g.dist[u][j]:
                G[j] = G[u] + g.dist[u][j]
        it += 1
        if it >= 1000:
            break
    # phase 2: greedy walk from goal back to start
    closed = [0] * n
    cur = goal
    closed[goal] = 1

    def push(v):
        if len(stack) < MAX_NODES:
            stack.append(v)

    def pop():
        return stack.pop() if stack else -1

    push(goal)
    it = 0
    arrived = False
    while True:
        bg, bf, bi = 9999, 9999, -1
        hit_start = False
        for j in range(n):
            if closed[j] or j == cur or not g.conn[cur][j]:
                continue
            if j == start:
                push(j)
                hit_start = True
                break
            if F[j] == 0:
                H[j] = ftol(f32(dist3(g.org(goal), g.org(j))))
                F[j] = H[j] + G[j]
            if G[j] < bg and F[j] < bf:
                bg, bf, bi = G[j], F[j], j
        if hit_start:
            arrived = True
            break
        if bi == -1:
            if len(stack) > 1:
                closed[cur] = 1
                cur = pop()
                closed[cur] = 0
            else:
                cur = -1
        else:
            closed[bi] = 1
            push(bi)
            cur = bi
        it += 1
        if it >= 1000 or cur == -1:
            break
    if len(stack) <= 1:
        return False, [], it
    return True, list(reversed(stack)), it


def report(g):
    n = g.n
    print('%s: size=%d nodes=%d' % (g.path, g.size, n))
    if n == 0:
        return
    xs = [nd[0] for nd in g.nodes]
    ys = [nd[1] for nd in g.nodes]
    zs = [nd[2] for nd in g.nodes]
    flags = {}
    res = {}
    for nd in g.nodes:
        flags[nd[3]] = flags.get(nd[3], 0) + 1
        res[nd[4]] = res.get(nd[4], 0) + 1
    print('  x [%.1f, %.1f]  y [%.1f, %.1f]  z [%.1f, %.1f]' % (min(xs), max(xs), min(ys), max(ys), min(zs), max(zs)))
    print('  node flags: %s   reserved field: %s' % (dict(sorted(flags.items())), dict(sorted(res.items()))))
    links = 0
    cvals = {}
    pads = {}
    asym = 0
    bad_dist = 0
    nonzero_unlinked = 0
    self_links = 0
    dmin, dmax = None, None
    deg = []
    for i in range(n):
        d_i = 0
        for j in range(n):
            c = g.conn[i][j]
            cvals[c] = cvals.get(c, 0) + 1
            pads[g.pad[i][j]] = pads.get(g.pad[i][j], 0) + 1
            if (g.conn[i][j], g.dist[i][j]) != (g.conn[j][i], g.dist[j][i]):
                asym += 1
            if c:
                if i == j:
                    self_links += 1
                d_i += 1
                links += 1
                d = g.dist[i][j]
                dmin = d if dmin is None else min(dmin, d)
                dmax = d if dmax is None else max(dmax, d)
                if abs(d - ftol(dist3(g.org(i), g.org(j)))) > 1:
                    bad_dist += 1
            elif g.dist[i][j] != 0:
                nonzero_unlinked += 1
        deg.append(d_i)
    print('  directed links=%d (undirected %d)  connected-byte values=%s' % (links, links // 2, dict(sorted(cvals.items()))))
    print('  link dist range [%s, %s]; dist != ftol(|a-b|)(+-1): %d; unlinked with dist!=0: %d; asymmetric entries: %d; self links: %d'
          % (dmin, dmax, bad_dist, nonzero_unlinked, asym, self_links))
    print('  padding byte triples: %s' % {k.hex(): v for k, v in sorted(pads.items(), key=lambda kv: -kv[1])[:6]})
    print('  degree min/avg/max: %d / %.1f / %d; isolated nodes: %d' % (min(deg), sum(deg) / n, max(deg), deg.count(0)))
    # spacing check (learning rule: no new node within 128 (32 if ladder) of an existing node; manual addnode: 8)
    close = 0
    for i in range(n):
        for j in range(i):
            if dist3(g.org(i), g.org(j)) < 128:
                close += 1
    print('  node pairs closer than 128: %d' % close)


def allpairs(g):
    n = g.n
    ok = fail = 0
    for a in range(n):
        for b in range(n):
            if a != b:
                r = find_path(g, a, b)[0]
                ok += r
                fail += not r
    print('  find_path all pairs: ok=%d fail=%d' % (ok, fail))


def main(argv):
    files = []
    do_all = '--allpairs' in argv
    argv = [a for a in argv if a != '--allpairs']
    if argv and argv[0] == '--path':
        g = Graph(argv[1])
        ok, p, it = find_path(g, int(argv[2]), int(argv[3]))
        print('ok=%s iterations=%d path=%s' % (ok, it, p))
        return
    for a in argv:
        if os.path.isdir(a):
            files += sorted(os.path.join(a, f) for f in os.listdir(a) if f.lower().endswith('.ndm'))
        else:
            files.append(a)
    for f in files:
        g = Graph(f)
        report(g)
        if do_all:
            allpairs(g)


if __name__ == '__main__':
    main(sys.argv[1:])

"""Turn the preprocessed SDK header into something Ghidra's CParser accepts:
drop _Static_assert lines and inline function bodies."""
import re, sys
src = open(sys.argv[1]).read()
src = re.sub(r'_Static_assert\s*\(.*?\)\s*;', '', src)
out, i = [], 0
pat = re.compile(r'(static\s+)?(inline|__inline)\b[^;{]*\{')
while True:
    m = pat.search(src, i)
    if not m:
        out.append(src[i:]); break
    out.append(src[i:m.start()])
    depth, j = 1, m.end()
    while depth:
        depth += {'{': 1, '}': -1}.get(src[j], 0); j += 1
    i = j
open(sys.argv[2], 'w').write(''.join(out))

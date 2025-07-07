# https://basecamp.eolymp.com/az/problems/9635
from collections import deque

inf = int(1e9 + 7)
n, m, s, t = map(int, input().split())
g = [[] for _ in range(n + 1)]
d = [[inf] * (n + 1) for _ in range(2)]
ans = 0
mp = {}

def Bfs(start_node, j):
    q = deque([start_node])
    d[j][start_node] = 0
    while q:
        cur = q.popleft()
        for to in g[cur]:
            if d[j][to] != inf:
                continue
            d[j][to] = d[j][cur] + 1
            q.append(to)

for i in range(m):
    u, v = map(int, input().split())
    if u > v:
        u, v = v, u
    mp[(u, v)] = True
    g[u].append(v)
    g[v].append(u)

Bfs(s, 0)
Bfs(t, 1)

for i in range(1, n + 1):
    for j in range(i + 1, n + 1):
        if (i, j) in mp:
            continue
        ans += (min(d[0][i] + d[1][j], d[0][j] + d[1][i]) + 1 >= d[0][t])

print(ans)
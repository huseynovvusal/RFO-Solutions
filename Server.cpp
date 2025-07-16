// https://basecamp.eolymp.com/az/problems/10456
// #include<iostream>
#include <stdio.h>
#include <vector>
#include <queue>
// #include<random>
// #include<chrono>
// #include<algorithm>
// #include<set>
#define SPEED                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define oo 1000000001
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define F first
#define S second
#define pii pair<int, int>
#define eb emplace_back
#define ll long long
#define ull unsigned long long

using namespace std;
// using ld = long double;

// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int sz = 1e4 + 5;

int n, m, k;

vector<pii> g[sz];

int guest[101];

vector<int> d;

int sum_of_city[sz];

inline void Dijkstra(int s)
{
    d.assign(n + 1, oo);
    d[s] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty())
    {
        int v = q.top().S;
        int dv = q.top().F;
        q.pop();
        if (dv ^ d[v])
            continue;
        sum_of_city[v] += d[v];
        for (auto &edge : g[v])
        {
            int to = edge.F, w = edge.S;
            if (d[to] > d[v] + w)
            {
                d[to] = d[v] + w;
                q.push({d[to], to});
            }
        }
    }
    return;
}

signed main()
{
    scanf("%d%d%d", &n, &m, &k);
    for (register int i = 1; i <= k; ++i)
    {
        scanf("%d", &guest[i]);
    }
    for (register int i = 1, a, b, c; i <= m; ++i)
    {
        scanf("%d%d%d", &a, &b, &c);
        g[a].eb((pii){b, c});
        g[b].eb((pii){a, c});
    }
    int ans{oo}, node{-1};
    for (register int i = 1; i <= k; ++i)
    {
        Dijkstra(guest[i]);
    }
    for (register int i = 1; i <= n; ++i)
    {
        if (sum_of_city[i] < ans)
        {
            ans = sum_of_city[i];
            node = i;
        }
    }
    printf("%d %d\n", node, ans);
    return 0;
}
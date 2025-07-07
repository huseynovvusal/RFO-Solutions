// https://basecamp.eolymp.com/az/problems/9635
#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;
int n, m, s, t, j, d[2][1010], ans;
vector<int> g[1010];

inline void Bfs(int start_node){
	queue<int> q;
	q.push(start_node);
	d[j][start_node] = 0;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int &to : g[cur]){
			if(d[j][to] != inf) continue;
			d[j][to] = d[j][cur] + 1;
			q.push(to);
		}
	}
	return;
}

map<pair<int, int>, bool> mp;

signed main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m >> s >> t;
	for(register int i = 1; i <= n; ++i){
		d[0][i] = d[1][i] = inf;
	}
	for(register int i = 1, u, v; i <= m; ++i){
		cin >> u >> v;
		if(u > v) swap(u, v);
		mp[{u,v}] = true;
		g[u].emplace_back(v), g[v].emplace_back(u);
	}
	Bfs(s);
	j = 1;
	Bfs(t);
	for(register int i = 1; i <= n; ++i){
		for(j = i + 1; j <= n; ++j){
			if(mp[{i,j}]) continue;
			ans += (min(d[0][i] + d[1][j], d[0][j] + d[1][i]) + 1 >= d[0][t]);
		}
	}
	cout << ans << '\n';
	return 0;
}
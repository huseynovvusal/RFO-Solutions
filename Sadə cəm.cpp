#include<bits/stdc++.h>
//#pragma GCC optimize("Ofast,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt,fma")
using namespace std;
int n, p[100010], tree[400010];
long long ans;
inline void build(int l, int r, int node){
	if(l == r){
		tree[node] = p[l];
		return;
	}
	int mid = l + ((r - l) >> 1);
	build(l, mid, node << 1); build(mid + 1, r, node << 1 | 1);
	tree[node] = min(tree[node << 1], tree[node << 1 | 1]);
}

inline int get_ans(int l, int r, int node, int L, int R){
	if(l > R || r < L) return (int)1e9 + 7;
	if(l >= L && r <= R) return tree[node];
	int mid = l + ((r - l) >> 1);
	return min(get_ans(l, mid, node << 1, L, R), get_ans(mid+1, r, node << 1 | 1, L, R));
}

signed main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for(register int i = 1; i <= n; ++i) cin >> p[i];
	build(1, n, 1);
	for(register int i = 1; i <= n; ++i){
		int l(1), r(1);
		int L(1), R(i), mid, best;
		while(L <= R){
			mid =  L + ((R - L) >> 1);
			if(get_ans(1, n, 1, i - mid + 1, i) == p[i]) L = mid + 1, best = mid;
			else R = mid - 1;
		}
		l = best;
		L = 1, R = n - i + 1;
		while(L <= R){
			mid =  L + ((R - L) >> 1);
			if(get_ans(1, n, 1, i, i + mid - 1) == p[i]) L = mid + 1, best = mid;
			else R = mid - 1;
		}
		r = best;
		ans += 1ll * r * l * p[i];
	}
	cout << ans << '\n';
	return 0;
}
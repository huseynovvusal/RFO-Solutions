// https://basecamp.eolymp.com/az/problems/9641
#include<bits/stdc++.h>
using namespace std;
int n;
struct cord{
	int x, y;
} a[100010];

bool cmpx(cord b, cord c){
	if(b.x != c.x) return b.x < c.x;
	return b.y < c.y;
}

long long get_dist(cord b, cord c){
	return 1ll * (b.x - c.x) * (b.x - c.x) + 1ll * (b.y - c.y) * (b.y - c.y);
}

cord zro;

bool cmpd(cord b, cord c){
	return get_dist(zro, b) < get_dist(zro, c);
}

long long ans = (long long)1e18 + 7;

signed main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for(register int i = 1; i <= n; ++i){
		cin >> a[i].x >> a[i].y;
	}
	const int m = 100;
	sort(a+1,a+n+1,cmpx);
	for(register int i = 1; i < n; ++i){
		ans = min(ans, get_dist(a[i], a[i+1]));
	}
	for(register int i = 1; i <= n; ++i){
		for(register int j = max(1, i - m); j <= min(n, i + m); ++j){
			if(i == j) continue;
			ans = min(ans, get_dist(a[i], a[j]));
		}
	}
	sort(a+1,a+n+1,cmpd);
	for(register int i = 1; i < n; ++i){
		ans = min(ans, get_dist(a[i], a[i+1]));
    }
	cout << ans << '\n';
	return 0;
}

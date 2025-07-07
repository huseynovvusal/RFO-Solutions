#include<iostream>
#include<vector>
#include<random>
#include<chrono>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define oo 1000000001
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define pii pair<int, int>
#define eb emplace_back
#define ll long long
#define ull unsigned long long
#define left lefttt
#define right righttt
#define y1 y_1

//using namespace __gnu_pbds;
//template<class T> using ost = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int sz = 1e5 + 5;
int n, k;
string s;
vector<pii> otos;
ll pref_sm[sz];
int pref_cnt[sz];

signed main(){
	SPEED;
	cin >> n >> k >> s;
	s = " " + s;
	int tmp(0);
	for(register int i = 1; i <= n; ++i){
		++tmp;
		if(i == 1) continue;
		if((s[i] ^ s[i-1])){
			otos.eb((pii){tmp - 1, (s[i-1] == '0')});
			tmp = 1;
		}
	}
	otos.eb((pii){tmp, (s[n] == '0')});
	n = (int)otos.size();
	for(register int i = 0; i < n; ++i){
		pref_sm[i] = (i ? pref_sm[i-1] : 0) + otos[i].F;
		pref_cnt[i] = (i ? pref_cnt[i-1] : 0) + otos[i].S;
	}
	ll ans(0);
	int l{0}, r{0};
	for( ; r < n; ++r){
		while(pref_cnt[r] - (l ? pref_cnt[l-1] : 0) > k){
			++l;
		}
		ans = max(ans, pref_sm[r] - (l ? pref_sm[l-1] : 0));
	}
	cout << ans << '\n';
	return 0;
}
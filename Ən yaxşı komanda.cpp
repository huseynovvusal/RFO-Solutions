#include<iostream>
#include<vector>
#include<random>
#include<chrono>
#include<algorithm>
#include<set>
#include<map>
#include<ios>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define oo 1000000001
#define in(x) scanf("%d",&x)
#define IN(x) scanf("%ld",&x)
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
#define int ll

//using namespace __gnu_pbds;
//template<class T> using ost = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

using namespace std;
using ld = long double;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

inline void setIn(string s) { freopen(s.c_str(), "r", stdin); }
inline void setOut(string s) { freopen(s.c_str(), "w", stdout); }

const int sz = 1e5 + 5;

int n, m;
int a[sz];

signed main(){
    SPEED;
    IN(n); IN(m);
    for(register int i = 1; i <= n; ++i){
        IN(a[i]);
    }
    sort(a+1,a+n+1);
    if(a[1] + a[2] > m){
        cout << -1 << '\n';
        return 0;
    }
    int l = 1, r = n;
    ll ans = a[1] + a[2];
    while(l < r && r && l <= n){
        if(a[l] + a[r] <= m){
            ans = max(ans, a[l] + a[r]);
            ++l;
        }else{
            --r;
        }
    }
    cout << ans << '\n';
    return 0;
}
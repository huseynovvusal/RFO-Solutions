// https://codeany.org/en/learn/archive/task/275
#include<iostream>
#include<vector>
#include<random>
#include<chrono>
#include<algorithm>
#include<set>
#include<map>
#include<ios>
#include<cstring>
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
 
//using namespace __gnu_pbds;
//template<class T> using ost = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
using namespace std;
using ld = long double;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
inline void setIn(string s) { freopen(s.c_str(), "r", stdin); }
inline void setOut(string s) { freopen(s.c_str(), "w", stdout); }

constexpr int sz = 1e5 + 5;

string s;

void solve(){
    cin >> s;
    int n = (int)s.size();
    int l(0), r(n-1), ans(0);

    while(l <= r){
        if(s[l] ^ s[r]){
            ans += (l + 1);
        }
        ++l, --r;
    }

    cout << ans << '\n';


}

signed main() {
    SPEED;
    solve();
    return 0;
}
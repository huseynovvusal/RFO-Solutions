// https://basecamp.eolymp.com/az/problems/8356
#include<iostream>
#include<random>
#include<chrono>
#include<vector>
#include<algorithm>
#define oo 1000000001
#define all(v) v.begin(),v.end()
#define f first
#define s second
#define eb emplace_back

using namespace std;
using ll = long long;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int sz = 1001;

int a[sz];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    unsigned long long ans(0);
    for(register int i = 1; i <= n; ++i){
        cin >> a[i];
        ans += a[i];
    }
    sort(a+1, a+n+1);
    reverse(a+1, a+n+1);
    n -= (n % 3);
    for(int i = 1; i <= n; ++i){
        if(i % 3 == 0){
            ans -= a[i];
        }
    }
    cout << ans << '\n';

    return 0;
}
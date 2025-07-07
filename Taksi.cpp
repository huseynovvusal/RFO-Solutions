// https://basecamp.eolymp.com/az/problems/8352
#include<iostream>
#include<random>
#include<chrono>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#define SPEED ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define oo 1000000001
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define F first
#define S second
#define pii pair<int, int>
#define eb emplace_back
#define pb push_back
#define mpr make_pair
#define ll long long

using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int sz = 1001;

int a, b, c;

signed main(){
    SPEED;
    cin >> a >> b >> c;
    if((a+b+c) % 3){
        cout << "IMPOSSIBLE" << '\n';
        return 0;
    }
    int d = (a + b + c) / 3;
    cout << max(c - d, 0) + max(b - d, 0) + max(a - d, 0) << '\n';
    return 0;
}
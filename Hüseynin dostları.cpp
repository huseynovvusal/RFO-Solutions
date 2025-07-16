// https://basecamp.eolymp.com/az/problems/11457
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>
#include <set>
#include <map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define SPEED                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define oo 1000000001
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define F first
#define S second
#define pii pair<int, int>
#define eb emplace_back
#define ll long long
#define ull unsigned long long
#define left lefttt
#define right righttt

// using namespace __gnu_pbds;
// template<class T> using ost = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void setIn(string s) { freopen(s.c_str(), "r", stdin); }
void setOut(string s) { freopen(s.c_str(), "w", stdout); }

const int sz = 5003;

int n;
int a[sz];

inline void test_case()
{
    cin >> n;
    for (register int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int tot = a[((n + 1) >> 1)];
    int ans(0);
    for (register int i = 1; i <= n; ++i)
    {
        ans += abs(tot - a[i]);
    }
    cout << ans << '\n';
    return;
}

signed main()
{
    SPEED;
    int T;
    cin >> T;
    while (T--)
    {
        test_case();
    }
    return 0;
}
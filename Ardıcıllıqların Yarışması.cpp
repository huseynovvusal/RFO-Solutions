#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>
#include <set>
#include <map>
#include <ios>
#include <cstring>
#define SPEED                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define oo 1000000001
#define in(x) scanf("%d", &x)
#define IN(x) scanf("%ld", &x)
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
#define y1 y_1

using namespace std;
using ld = long double;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

inline void setIn(string s) { freopen(s.c_str(), "r", stdin); }
inline void setOut(string s) { freopen(s.c_str(), "w", stdout); }

const int sz = 1e5 + 5;

int n;
int a[sz];
bool has_one;

signed main()
{
    SPEED;
    cin >> n;
    for (register int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] == 1)
            has_one = true;
    }
    if (!has_one)
    {
        cout << 0 << '\n';
        return 0;
    }
    int l{1}, r{n}, peak{1};
    bool has{true};
    while (l <= r)
    {
        if (a[l] == peak && (a[r] ^ peak))
        {
            --r;
        }
        else if ((a[l] ^ peak) && a[r] == peak)
        {
            ++l;
        }
        else if ((a[l] ^ peak) && (a[r] ^ peak))
        {
            ++l, --r;
        }
        else
        {
            ++l, --r, ++peak;
        }
    }
    cout << peak - 1 << '\n';

    return 0;
}
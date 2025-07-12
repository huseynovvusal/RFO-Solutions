// https://www.eolymp.com/en/problems/11342

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
signed main()
{
    fastio;
    int n;
    cin >> n;
    vector<int> a(n), pref(n);
    map<int, int> ind;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] % n;
        if (i == 0)
        {
            pref[i] = a[i];
        }
        else
        {
            pref[i] = pref[i - 1] + a[i];
        }
        if (ind[pref[i]] == 0)
        {
            ind[pref[i]] = i + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (pref[i] % n == 0)
        {
            cout << 1 << " " << i + 1;
            return 0;
        }
        else if (ind[pref[i] % n] > 0 && ind[pref[i] % n] < i + 1)
        {
            cout << ind[pref[i] % n] + 1 << " " << i + 1;
            return 0;
        }
        else if (ind[pref[i]] > 0 && ind[pref[i]] < i + 1)
        {
            cout << ind[pref[i]] + 1 << " " << i + 1;
            return 0;
        }
    }
    cout << -1 << " " << -1;

    return 0;
}
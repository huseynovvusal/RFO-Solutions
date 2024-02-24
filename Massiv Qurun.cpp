#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n;

    cin >> n;

    vector<int> a(n + 1);

    a[n] = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    n++;

    vector<tuple<int, int, int>> res;
    // VALUE, INDEX
    stack<pair<int, int>> s;

    s.push({0, -1});

    for (int i = 0; i < n; i++)
    {
        while (s.top().first > a[i])
        {
            res.push_back({s.top().second, i - 1, s.top().first});

            s.pop();
        }

        if (s.top().first < a[i])
            s.push({a[i], i});
    }

    cout << (int)res.size() << endl;

    for (auto &[l, r, val] : res)
    {
        cout << l + 1 << ' ' << r + 1 << ' ' << val << endl;
    }

    return 0;
}

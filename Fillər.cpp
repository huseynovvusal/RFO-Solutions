// https://basecamp.eolymp.com/az/problems/9630

#include <bits/stdc++.h>

using namespace std;
long long a[4000010], ans[4000010], ans2[4000010], n, m, cur;
long long f(long long x, long long y)
{
    return a[y] - a[x - 2] * (x >= 2);
}
int main()
{
    ios_base::sync_with_stdio(false), cout.tie(0), cin.tie(0);
    cin >> n >> m;
    long long x, y, pos1, pos2;
    for (int i = 1; i <= m; ++i)
    {
        cin >> x >> y;
        pos1 = (pos2 = x - y + n, x + y);
        if (ans[pos1] == 0)
        {
            if (pos1 > n + 1)
                cur += ((n << 1) - pos1 + 1);
            else
                cur += (pos1 - 1);
            ans[pos1] = a[pos1] = 1;
        }
        if (ans2[pos2] == 0)
        {
            if (x - y < 0)
                cur += (n + (x - y));
            else
                cur += (n - (x - y));
            ans2[pos2] = 1;
        }
    }
    for (int i = 2; i <= (n << 1); ++i)
        a[i] += a[i - 2];
    for (int i = n; i; --i)
        cur -= f(i + 1, (n << 1) - i + 1) * bool(ans2[n + i - 1]);
    for (int i = 2; i <= n; ++i)
        cur -= f(i + 1, (n << 1) - i + 1) * bool(ans2[n - i + 1]);
    cout << n * n - cur << '\n';
}
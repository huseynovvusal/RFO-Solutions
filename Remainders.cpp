#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, ans = 0, a, b;
    cin >> n >> m;
    long long sq = sqrt(n);
    if (m > n)
    {
        ans += (m - n) * n;
    }

    for (int i = 1; i <= min(sq, m); i++)
    {
        ans += n % i;
    }
    for (int i = 1; i <= min(m, n / (sq + 1)); i++)
    {
        a = n / (i + 1) + 1;
        b = min(n / i, m);
        if (a > b)
            continue;
        long long sum = (a + b) * (b - a + 1) / 2;
        ans += (b - a + 1) * n - i * sum;
    }
    cout << ans << endl;
}
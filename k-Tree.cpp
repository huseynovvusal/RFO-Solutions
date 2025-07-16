// https://basecamp.eolymp.com/en/problems/7313
#include <ios>
#include <vector>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n, k, d;
    scanf("%d%d%d", &n, &k, &d);
    vector<ll> dp(n + 1, 0), dp_d(n + 1, 0);
    dp[0] = dp_d[0] = 1;
    // dp[2] = 2;
    // dp[3] = 4;
    // dp[4] = 7;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k and i - j >= 0; ++j)
        {
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j < d and j <= i; ++j)
        {
            dp_d[i] += dp_d[i - j];
            dp_d[i] %= MOD;
        }
    }
    int answer = (dp[n] - dp_d[n] + MOD) % MOD;
    printf("%d\n", answer);
    return 0;
}
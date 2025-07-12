// https://basecamp.eolymp.com/en/problems/8360

#include <bits/stdc++.h>
using namespace std;
const int up = 1003;
int dp[up][up];
int main()
{
	int n, m, i, j;
	cin >> n >> m;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			cin >> dp[i][j];
	for (i = 2; i <= n; i++)
		for (j = 1; j <= m; j++)
			dp[i][j] += max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i - 1][j + 1]));
	int res = dp[n][1];
	int pos = 1;
	for (i = 2; i <= m; i++)
	{
		if (dp[n][i] > res)
		{
			res = dp[n][i];
			pos = i;
		}
	}
	for (i = n - 1; i >= 1; i--)
	{
		int best = pos - 1;
		if (dp[i][pos] > dp[i][best])
			best = pos;
		if (dp[i][pos + 1] > dp[i][best])
			best = pos + 1;
		pos = best;
	}
	cout << pos << " " << res;
}
// https://basecamp.eolymp.com/az/problems/11599
#include<bits/stdc++.h>
using namespace std;

int n, a, b, c;
int dp[5000];

signed main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> a >> b >> c;
  dp[0] = 1;
  for(register int i = 1; i <= n; ++i){
    if(i >= a && dp[i-a]) dp[i] = max(dp[i], dp[i-a] + 1);
    if(i >= b && dp[i-b]) dp[i] = max(dp[i], dp[i-b] + 1);
    if(i >= c && dp[i-c]) dp[i] = max(dp[i], dp[i-c] + 1);
  }
  cout << dp[n] - 1 << '\n';
  return 0;
}
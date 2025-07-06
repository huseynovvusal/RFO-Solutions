// https: // www.eolymp.com/az/problems/9004

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<long long> dp(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    stack<int> st;

    for (int i = 0; i < n; ++i)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            st.pop();
        }

        int j = st.empty() ? -1 : st.top();

        dp[i] = (j == -1 ? 0LL : dp[j]) + 1LL * (i - j) * arr[i];

        st.push(i);
    }

    long long result = 0;

    for (int i = 0; i < n; ++i)
    {
        result += dp[i];
    }

    cout << result << endl;

    return 0;
}
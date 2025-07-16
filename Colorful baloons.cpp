// https://basecamp.eolymp.com/en/problems/11398

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n{(int)s.size()};
    string s1 = "", s2 = "";
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            s2 += '1';
            s1 += '0';
        }
        else
        {
            s1 += '1';
            s2 += '0';
        }
    }
    int ans1(0), ans2(0);
    for (int i = 0; i < n; ++i)
    {
        ans1 += (s[i] != s1[i]);
        ans2 += (s[i] != s2[i]);
    }
    cout << min(ans1, ans2) << endl;
}
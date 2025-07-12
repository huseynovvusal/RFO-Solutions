// https://basecamp.eolymp.com/en/problems/9640

#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	long n, s, a, sum = 0;
	cin >> n;
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> s >> a;
		sum += s;
		v.push_back(a - s);
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
	}
	cout << sum;
}
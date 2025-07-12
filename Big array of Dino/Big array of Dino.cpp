// https://basecamp.eolymp.com/en/problems/9639

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long n, number, count, m, k = 0;
	map<long, long> mp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> count >> number;
		mp[number] += count;
	}
	cin >> m;
	for (auto i : mp)
	{
		k += i.second;
		if (k >= m)
		{
			cout << i.first;
			return 0;
		}
	}
}
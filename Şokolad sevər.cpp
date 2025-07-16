// https://basecamp.eolymp.com/az/problems/9002
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, a, b, i, sum = 0, kmin, kmax;
	cin >> n >> a >> b;
	kmax = max(a, b);
	kmin = min(a, b);
	while (n > 0)
	{
		sum += kmax;
		n--;
		if (n > 0)
		{
			sum += kmin;
			n--;
		}
	}
	cout << sum;
}
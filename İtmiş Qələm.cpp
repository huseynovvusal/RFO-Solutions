#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main()
{
    cin.tie(0);

    ll n, a;
    cin >> n;

    vector<bool> arr(n + 1, false);

    int rep = -1;
    int total = n * (n + 1) / 2;
    int s = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;

        if (!arr[a])
            s += a;

        arr[a] = true;
    }

    if (total != s)
        cout << (total - s) << endl;
    else
        cout << -1 << endl;

    return 0;
}

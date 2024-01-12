// https://www.eolymp.com/az/problems/9634

#include <iostream>

using namespace std;

int main()
{
    int n;
    double a;
    char b;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a >= 3.5 && (b == 'B' || b == 'A'))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }

    return 0;
}
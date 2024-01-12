// https://www.eolymp.com/az/problems/9636

#include <iostream>

using namespace std;

int main()
{

    int a, b, s;

    cin >> a >> b;

    s = a - b * 2;

    if (s < 0)
        cout << 0;

    else
        cout << s;

    return 0;
}
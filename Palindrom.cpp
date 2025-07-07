// https://codeany.org/az/learn/archive/task/468
#include "bits/stdc++.h"
using namespace std;

constexpr int sz = 1e5 + 5;

long long l, r;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> l >> r;
    auto F = [&](long long i) {
        string s = "";
        long long num = i;
        while (i) {
            s = char('0' + int(i % 10)) + s;
            i /= 10;
        }
        int n = s.length();
        int L = 0, R = n - 1;
        while (L <= R) {
            if (s[L] != s[R]) {
                cout << num << '\n';
                return;
            }
            ++L, --R;
        }
        cout << "Palindrome!" << '\n';
    };
    for (long long i = l; i <= r; ++i) {
        F(i);
    }
}   
# https://codeany.org/en/learn/archive/task/275
import sys

def solve():
    s = input().strip()
    n = len(s)
    l, r, ans = 0, n - 1, 0
    
    while l <= r:
        if s[l] != s[r]:
            ans += (l + 1)
        l += 1
        r -= 1
    
    print(ans)

if __name__ == "__main__":
    solve()
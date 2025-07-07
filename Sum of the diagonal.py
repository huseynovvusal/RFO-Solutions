# https://codeany.org/en/learn/archive/task/276
n = int(input())
ans = n * n * n + n
if n % 2:
    ans -= (n * (((n + 1) // 2) - 1) + ((n + 1) // 2))
print(ans)
# https://basecamp.eolymp.com/az/problems/11114
MOD = 998244353

def power(n, m):
    if m <= 1:
        return n % MOD
    elif m % 2 == 0:
        return power((n % MOD) * (n % MOD), m // 2) % MOD
    else:
        return (n % MOD) * power(n, m - 1) % MOD

def main():
    n, m = map(int, input().split())
    res = power(2 * n + 1, m) % MOD
    print(res)

if __name__ == "__main__":
    main()
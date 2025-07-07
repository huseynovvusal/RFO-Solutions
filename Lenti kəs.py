# https://basecamp.eolymp.com/az/problems/11599
def main():
    n, a, b, c = map(int, input().split())
    
    dp = [0] * (n + 1)
    
    dp[0] = 1 

    for i in range(1, n + 1):
        if i >= a and dp[i - a]:
            dp[i] = max(dp[i], dp[i - a] + 1)
        if i >= b and dp[i - b]:
            dp[i] = max(dp[i], dp[i - b] + 1)
        if i >= c and dp[i - c]:
            dp[i] = max(dp[i], dp[i - c] + 1)
    
    print(dp[n] - 1)

if __name__ == "__main__":
    main()
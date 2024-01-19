# https://www.eolymp.com/az/problems/9004

n = int(input())
arr = list(map(int,input().split()))
dp = [0] * len(arr)

stack = []

for i in range(len(arr)):
    while(stack and arr[stack[-1]] > arr[i]): 
        stack.pop()

    j = -1 if not stack else stack[-1]

    dp[i] = dp[j] + (i - j) * arr[i]

    stack.append(i)

print(sum(dp))
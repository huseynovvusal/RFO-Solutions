# https://www.eolymp.com/az/problems/9632

n, m = map(int, input().split())

arr = list(map(int, input().split()))

arr.sort()

l = 0
r = n - 1

result = -1

while (l < r):
    cem = arr[l] + arr[r]

    if (cem < m):
        l += 1
        result = max(result, cem)
    elif (cem == m):
        result = m
        break

    else:
        r -= 1

print(result)
# https://basecamp.eolymp.com/az/problems/9637
a, b = map(int, input().split())
dif = b - a
print(b - (dif * (dif + 1)) // 2)
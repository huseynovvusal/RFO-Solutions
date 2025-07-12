# https://basecamp.eolymp.com/az/problems/9638

a, b = map(int, input().split())

if (a + b) % 2 != 0:
    print("-")
else:
    print((a + b) // 2)
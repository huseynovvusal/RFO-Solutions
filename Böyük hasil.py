# https://basecamp.eolymp.com/az/problems/9001
a, b = map(int, input().split())

if a > 0 and b > 0:
    print(1)
elif (a < 0 and b > 0) or a == 0 or b == 0:
    print(0)
elif a < 0 and b < 0:
    if (abs(b - a) + 1) % 2 == 1:
        print(-1)
    elif (abs(b - a) + 1) % 2 == 0:
        print(1)
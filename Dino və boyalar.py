# https://basecamp.eolymp.com/az/problems/9636
a, b = map(int, input().split())
sum_val = a - 2 * b

if sum_val >= 0:
    print(sum_val)
else:
    print(0)
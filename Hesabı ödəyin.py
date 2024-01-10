# https://www.eolymp.com/az/problems/11396

from math import ceil

n = int(input())

if (n % 10 == 0):
    print(n + n // 10)
else:
    print(n + n // 10 + 1)
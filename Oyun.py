# https://www.eolymp.com/az/problems/11401

n = int(input())

arr = list(map(int, input().split()))

s = set()

for i in arr:
    if (i in s):
        s.remove(i)
    else:
        s.add(i)

print(len(s))
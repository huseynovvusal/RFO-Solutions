# https://www.eolymp.com/en/problems/11342

from collections import defaultdict

n = int(input())

arr = list(map(int,input().split()))

d = defaultdict(int)

d[0] = -1

sum = 0

res = [-1,-1]

for i in range(n):
    sum += arr[i]

    if(sum % n in d):
        ind1,ind2 = d[sum % n],i
        res[0],res[1] = min(ind1,ind2) + 2,max(ind1,ind2) + 1
        break

    d[sum % n] = i

print(*res)
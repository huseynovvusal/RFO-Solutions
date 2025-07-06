import heapq

n,m = map(int,input().split())

arr = list(map(int,input().split()))

q = []

for i in range(1,n):
    heapq.heappush(q,(arr[i] + arr[i - 1],arr[i - 1], arr[i]))

res = max(arr)

while(m > n):
    sum,l,r = heapq.heappop(q)

    res = max(res,sum)

    heapq.heappush(q,(sum + l,l,sum))
    heapq.heappush(q,(sum + r,sum,r))

    m -= 1

print(res)
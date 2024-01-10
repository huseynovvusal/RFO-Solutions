# https://www.eolymp.com/az/problems/11399

base = [1,2,4,8]

def findKthLuckyNumber(k,memo = {0 : 0}):

    if(k in memo): return memo[k]

    d = k // 4
    q = k % 4

    if(d <= 4):
        index = d - 1 - int(q == 0)

        last = base[q - 1] if q != 0 else base[-1]

        if(index < 0): 
            memo[k] = last
        else:
            memo[k] = base[index] * 10 + last

    else:
        if(q == 0):
            memo[k] = findKthLuckyNumber(d - 1,memo) * 10 + base[-1]
        else:
            memo[k] = findKthLuckyNumber(d,memo) * 10 + base[q - 1]

    return memo[k]

def findNextLuckyNumber(k):
    l = 1 
    r = int(1e15)
    res = k

    while(l <= r):
        mid = (l + r) // 2

        lucky = findKthLuckyNumber(mid)

        if(lucky <= k):
            l = mid + 1
        else:
            r = mid - 1
            res = lucky

    return res

# print(findKthLuckyNumber(1)) -> 1
# print(findKthLuckyNumber(16)) -> 48
# print(findKthLuckyNumber(340)) -> 8888

t = int(input())

for _ in range(t):
    q,k = map(int,input().split())
    
    if(q == 1):
        print(findKthLuckyNumber(k))
    else:
        print(findNextLuckyNumber(k))
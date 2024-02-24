n,k = map(int,input().split())

arr = []

for i in range(k):
    arr.append(list(map(int,input().split())))

pos = [[0] * k for _ in range(n + 1)]

for j in range(k):
    for i in range(n):
        el = arr[j][i]

        pos[el][j] = i

del arr
dp = [0 for _ in range(n + 1)]

pos.sort()

def check(prev,next):
    for i in range(k):
        if(pos[prev][i] > pos[next][i]): return False

    return True

for i in range(n + 1):
    for j in range(i):
        if(check(j,i)):
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))


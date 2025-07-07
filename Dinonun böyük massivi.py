# https://basecamp.eolymp.com/az/problems/9639
n = int(input())
mp = {}

for _ in range(n):
    count, number = map(int, input().split())
    if number in mp:
        mp[number] += count
    else:
        mp[number] = count

m = int(input())
k = 0

for number, count in sorted(mp.items()):
    k += count
    if k >= m:
        print(number)
        break

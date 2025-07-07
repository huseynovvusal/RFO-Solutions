# https://basecamp.eolymp.com/az/problems/9641
import math

class Cord:
    def __init__(self, x, y):
        self.x = x
        self.y = y

def cmpx(b, c):
    if b.x != c.x:
        return b.x < c.x
    return b.y < c.y


def get_dist(b, c):
    return (b.x - c.x) ** 2 + (b.y - c.y) ** 2


def cmpd(b, c, zro):
    return get_dist(zro, b) < get_dist(zro, c)

def main():
    n = int(input())  
    a = [] 
    for _ in range(n):
        x, y = map(int, input().split())
        a.append(Cord(x, y)) 

    zro = Cord(0, 0) 

    a.sort(key=lambda p: (p.x, p.y))

    ans = float('inf') 

    for i in range(1, n):
        ans = min(ans, get_dist(a[i-1], a[i]))

    m = 100
    for i in range(n):
        for j in range(max(0, i - m), min(n, i + m + 1)):
            if i == j:
                continue
            ans = min(ans, get_dist(a[i], a[j]))

    a.sort(key=lambda p: get_dist(zro, p))
   
    for i in range(1, n):
        ans = min(ans, get_dist(a[i-1], a[i]))

    print(ans) 

if __name__ == "__main__":
    main()

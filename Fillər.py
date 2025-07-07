# https://basecamp.eolymp.com/az/problems/9630
def f(x, y, a):
    if x >= 2:
        return a[y] - a[x - 2]
    else:
        return a[y]

def main():
    n, m = map(int, input().split())
    
    a = [0] * (2 * n + 2)
    ans = [0] * (2 * n + 2)
    ans2 = [0] * (2 * n + 2)
    cur = 0
    
    for _ in range(m):
        x, y = map(int, input().split())
        
        pos1 = x + y
        pos2 = x - y + n
        
        if ans[pos1] == 0:
            if pos1 > n + 1:
                cur += 2 * n - pos1 + 1
            else:
                cur += pos1 - 1
            ans[pos1] = a[pos1] = 1
        
        if ans2[pos2] == 0:
            if x - y < 0:
                cur += n + (x - y)
            else:
                cur += n - (x - y)
            ans2[pos2] = 1
    
    for i in range(2, 2 * n + 1):
        a[i] += a[i - 2]
    
    for i in range(n, 0, -1):
        if not ans2[n + i - 1]:
            continue
        cur -= f(i + 1, 2 * n - i + 1, a)
    
    for i in range(2, n + 1):
        if ans2[n - i + 1] == 0:
            continue
        cur -= f(i + 1, 2 * n - i + 1, a)
    
    print(n * n - cur)
    
if __name__ == "__main__":
    main()
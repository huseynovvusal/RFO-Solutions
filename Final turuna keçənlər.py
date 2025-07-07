n = int(input())
for i in range(n):
    m, ch = input().split()
    m = float(m)
    if m >= 3.5 and (ch == 'A' or ch == 'B'):
        print("1")
    else:
        print("0")
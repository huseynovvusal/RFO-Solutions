# https://www.eolymp.com/az/problems/11397

n = int(input())

arrCut = []
arrTek = []

r = []

for i in range(1, n + 1, 2):
    arrTek.append(str(i))
for i in range(2, n + 1, 2):
    arrCut.append(str(i))

if (n % 2 == 0):
    r = arrCut[::-1] + arrTek

else:
    r = arrTek[::-1] + arrCut

print(" ".join(r))
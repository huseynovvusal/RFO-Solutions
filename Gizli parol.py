# https://www.eolymp.com/az/problems/11404

s1 = input()
s2 = input()

t = 0
c = 0

r = ""

for i in range(0, len(s1) + len(s2)):
    if (i % 2 == 0):
        r += s1[t]
        t += 1
    else:
        r += s2[c]
        c += 1

print(r)
# https://www.eolymp.com/az/problems/11402

n,k = map(int,input().split())

s = input()

starts,ends = [],[]
res = 0

for i in range(n):
    if(s[i] == '1'):
        if(i == 0 or s[i - 1] == '0'): starts.append(i)
        if(i == n - 1 or s[i + 1] == '0'): ends.append(i)
        
if(s == '0' * len(s)): res = n
        
for i in range(len(starts)):
    if(i == 0 and starts[0] != 0): 
        _k = k - 1
        
        count = starts[0] + 1

        if(_k > 0):
            end = n - 1
            if(i + _k < len(ends)): 
                end = ends[i + _k]
                count += ends[i + _k] - starts[i]
                res = max(res,count)
            else:
                count += (n - 1) - starts[i]
                res = max(res,count)


        res = max(res,count)

    start = starts[i]
    end = n - 1
    if(i + k < len(ends)): end = ends[i + k]

    res = max(res,end - start + 1)

print(res)
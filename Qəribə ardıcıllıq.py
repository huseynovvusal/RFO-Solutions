# https://www.eolymp.com/az/problems/11405

n = int(input())

arr = [1,11,12,22,23,33,34,44,45,55,56,66,67,77,78,88,89,91,101]

if(n <= len(arr)): print(*arr[:n])
else:
    while(n - 19):
        num = arr[-1]
        s = str(num)

        curr = num + 10
        curr_s = str(curr)
        lc = len(curr_s)

        # 999 - 8
        if(curr_s == curr_s[0] + '9' * (lc - 1)):
            curr = curr - 8
        # 898 + 1
        elif(curr_s == curr_s[0] + '9' * (lc - 2) + curr_s[-1]):
            curr = num + 11
        else:
            curr = num + 10

        arr.append(curr)
            

        n -= 1

    # print(arr)
    print(*arr)
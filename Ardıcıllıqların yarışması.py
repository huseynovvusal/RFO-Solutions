# https://www.eolymp.com/az/problems/9631

n = int(input())

arr = list(map(int, input().split()))


def findBiggest(n, arr):
    if (arr.count(1) == 0):
        return 0

    max = 0

    i, j = 0, n - 1

    while (i <= j):
        if (arr[i] == arr[j] and arr[i] == max + 1):
            max = arr[i]

        if (arr[i] != max + 1):
            i += 1

        if (arr[j] != max + 1):
            j -= 1

    return max


print(findBiggest(n, arr))
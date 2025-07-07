# https://codeany.org/az/learn/archive/task/468
def main():
    l, r = map(int, input().split())
    
    def is_palindrome(i):
        s = str(i)
        n = len(s)
        L, R = 0, n - 1
        while L <= R:
            if s[L] != s[R]:
                print(i)
                return
            L += 1
            R -= 1
        print("Palindrome!")

    for i in range(l, r + 1):
        is_palindrome(i)

main()

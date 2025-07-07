# https://basecamp.eolymp.com/az/problems/11113
def main():
    n, m = map(int, input().split())
    print(min(min(n, m), (n + m) // 3))

if __name__ == "__main__":
    main()
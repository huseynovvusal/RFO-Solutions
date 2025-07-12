# https://basecamp.eolymp.com/en/problems/11116
import math

def main():
    n = int(input())
    
    while n % 2 == 0:
        n //= 2
    
    cnt = 0
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0:
            if n // i == i:
                cnt += 1
            else:
                cnt += 2
    
    print(cnt * 2)

if __name__ == "__main__":
    main()
# https://basecamp.eolymp.com/en/problems/9640

def main():
    n = int(input())  
    v = []  
    sum_val = 0  

    for _ in range(2 * n):
        s, a = map(int, input().split()) 
        sum_val += s 
        v.append(a - s) 

    
    v.sort(reverse=True)

    for i in range(n):
        sum_val += v[i]

    print(sum_val) 

if __name__ == "__main__":
    main()
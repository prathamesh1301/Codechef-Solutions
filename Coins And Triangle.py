def solve(n):
    return int(n*(n+1)/2)
for i in range(int(input())):
    n=int(input())
    h=1
    while(solve(h)<=n):
        h+=1
    print(h-1)    
    

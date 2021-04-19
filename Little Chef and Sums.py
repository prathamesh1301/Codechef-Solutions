for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    m=min(a)
    for j in range(n):
        if(a[j]==m):
            print(j+1)
            break


for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    p=[0 for j in range(n)]
    p[0]=a[0]
    for j in range(1,n):
        p[j]=min(p[j-1],a[j])
    print(sum(p))

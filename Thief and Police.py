for i in range(int(input())):
    n,m=map(int,input().split())
    x,y=map(int,input().split())
    a,b=map(int,input().split())
    t=n-x+m-y
    p=n-a+m-b-min(n-a,m-b)
    if(t<=p):
        print("YES")
    else:
        print("NO")

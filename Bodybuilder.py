for i in range(int(input())):
    n,r=list(map(int,input().split()))
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    maxt=b[0]
    t=b[0]
    x=b[0]
    for j in range(1,n):
        prev=a[j-1]
        curr=a[j]
        x=max(b[j],x+b[j]-(curr-prev)*r)
        
        if(x>maxt):
            maxt=x
    print(maxt)        
 

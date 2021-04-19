for i in range(int(input())):
    n,x=list(map(int,input().split()))
    a=list(map(int,input().split()))
    l=len(set(a))
    diff=n-x
    if(l>diff):
        print(diff)
    else:
        print(l)
        

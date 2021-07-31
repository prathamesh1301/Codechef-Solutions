for k in range(int(input())):
    hp={}
    n=int(input())
    a=list(map(int,input().split()))
    for i in a:
        if i in hp.keys():
            hp[i]=hp[i]+1
        else:
            hp[i]=1
    ans=0
    for i in hp.keys():
        ans+=hp[i]*(n-hp[i])
    print(ans)    

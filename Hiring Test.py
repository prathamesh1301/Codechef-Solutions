for i in range(int(input())):
    n,m=map(int,input().split())
    x,y=map(int,input().split())
    a=[]
    ans=[]
    for j in range(n):
        d=list(input())
       
        a.append(d)
    for j in range(n):
        ctF=0
        ctP=0
        for k in range(m):
            if(a[j][k]=='P'):
                ctP+=1
            if(a[j][k]=='F'):
                ctF+=1
        if(ctF>=x or (ctF>=(x-1) and ctP>=y)):
            ans.append(1)
        else:
            ans.append(0)
    for j in ans:
        print(j,end="")
    print()    
            
            
            

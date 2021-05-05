import math
for i in range(int(input())):
    s=list(input())
    l={}
    r={}
    n=len(s)
    if(n%2==0):
        f=0
        t=int(n/2)
        for j in range(n):
             l[s[j]]=0
             
        for j in range(t):
            l[s[j]]+=1
        
        for j in range(n):
            r[s[j]]=0 
        for j in range(t,n):
            r[s[j]]+=1
            
        for j in range(t):
            if(l[s[j]]!=r[s[j]]):
                f=1
                break
        if(f==1):
            print("NO")
        else:
            print("YES")
    else:
        f=0
        t=int(math.floor(n/2))
        for j in range(n):
            l[s[j]]=0
        for j in range(n):
            r[s[j]]=0
        for j in range(t):
            l[s[j]]+=1    
        for j in range(t+1,n):
            r[s[j]]+=1    
        for j in range(t):
            if(l[s[j]]!=r[s[j]]):
                f=1
                break
        if(f==1):
            print("NO")
        else:
            print("YES")    
            
        
        
            
           
            
    

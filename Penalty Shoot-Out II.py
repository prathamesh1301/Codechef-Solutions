import math
for i in range(int(input())):
    k=int(input())
    s=list(input())
    count=0
    cta=0
    ctb=0
    na=k
    nb=k
    
    for j in range(2*k):
        if(j%2==0):
            if(s[j]=='1'):
                cta+=1
            na-=1
            
        if(j%2!=0):
            if(s[j]=='1'):
                ctb+=1
            nb-=1
          
        if(cta-ctb>nb):
            count=j+1
            break
        
            
        if(ctb-cta>na):
            count=j+1
            break
        if(cta==ctb and j==2*k-1):
            count=j+1
            break
    print(count,end="\n")    
            
            

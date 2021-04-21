for i in range(int(input())):
    s=list(input())
    n=len(s)
    x=0
    ct=0
    for j in range(n):
        if(s[j]=='<'):
            x+=1
        else:
            x-=1
            if(x<0):
                break
        if(x==0):
            ct=j+1
            
            
        
    print(ct)            

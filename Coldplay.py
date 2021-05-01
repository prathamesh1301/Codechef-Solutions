for i in range(int(input())):
    n,s=map(int,input().split())
    ct=0
    if(n<s):
        ct=0
    else:
        while(n>0):
            n-=s
            ct+=1
            if(n>=s):
                continue
            else:
                break
    print(ct) 

for i in range(int(input())):
    n=int(input())
    s=list(input())
    ct=0
    f=0
    for j in range(n):
        if(s[j]=='1'):
            ct+=1
        if(((ct*100)/(j+1))>=50):
            f=1
            print("YES")
            break
    if(f==0):
        print("NO")
            

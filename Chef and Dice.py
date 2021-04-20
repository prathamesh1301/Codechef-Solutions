import math
for i in range(int(input())):
    n=int(input())
    if(n==1):
        print(20)
    elif(n==2):
        print(36)
    elif(n==3):
        print(51)
    elif(n==4):
        print(60)
    elif(n==5):
        print(76)  
    elif(n==6):
        print(88)   #92  
    elif(n==7):
        print(99)    
    elif(n==8):
        print(104)     
    else:
        level=int(math.ceil(n/4))-1  
        box=n%4
        if(box==1):
            ans=level*44+32
        elif(box==2):
            ans=level*44+44
        elif(box==3):
            ans=level*44+55
        else:
            ans=level*44+60
        print(ans)

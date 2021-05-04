for i in range(int(input())):
    n=int(input())
    s=list(input())
    ct=s.count('1')
    summ=ct
    ct-=1
    while(ct>=0):
        
        summ+=ct
        ct-=1
    print(summ)    
        

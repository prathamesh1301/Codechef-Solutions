for j in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    
    maxx=a[0]+a[1]+a[2]
    summ=a[0]+a[1]+a[2]
    i=1
    
    while(i!=0):
        
        summ=a[i%n]+a[(i+1)%n]+a[(i+2)%n]
        if(summ>maxx):
            maxx=summ
        summ=0
        i=(i+1)%n
    print(maxx) 
    
            
            

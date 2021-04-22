import math
def isPrime(n):
    if(n>1):
        for i in range(2,int(math.sqrt(n))+1):
            if(n%i==0):
                return False
        else:
            return True
    else:
        return False
for i in range(int(input())):
    n=int(input())
    prime=[2]
    for j in range(3,n):
        if(isPrime(j)):
            prime.append(j)
    semiPrime=[]
    for j in range(len(prime)):
        for k in range(j+1,len(prime)):
            semiPrime.append(prime[j]*prime[k])
    f=0        
    for j in range(len(semiPrime)):
        for k in range(j,len(semiPrime)):
            if(semiPrime[j]+semiPrime[k]==n):
                print("YES")
                f=1
                break
        if(f==1):
            break
    if(f==0):
        print("NO")
            
             
            
        
    

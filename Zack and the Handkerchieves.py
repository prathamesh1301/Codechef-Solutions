def gcd(a,b):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
for i in range(int(input())):
    l,b=map(int,input().split())
    x=gcd(l,b)
    print(x)

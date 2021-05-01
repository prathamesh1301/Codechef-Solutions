n=int(input())
a=list(map(int,input().split()))
k=int(input())
q=list(map(int,input().split()))
summ=sum(a)
for i in range(k):
    summ=(summ*2)%1000000007
    print(summ)

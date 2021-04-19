for i in range(int(input())):
    am,bm,cm,tm,A,B,C=list(map(int,input().split()))
    summ=A+B+C
    if(A>=am and B>=bm and C>=cm and summ>=tm):
        print("YES")
    else:
        print("NO")
        

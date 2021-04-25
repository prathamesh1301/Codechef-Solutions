for i in range(int(input())):
    x,y,xr,yr,D=list(map(int,input().split()))
    food=x/xr
    water=y/yr
    survival=min(food,water)
    if(survival>=D):
        print("YES")
    else:
        print("NO")

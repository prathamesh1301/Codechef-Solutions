x,y=map(float,input().split())
if((x+0.50)<=y and x%5==0):
    diff=y-x-0.50
    print("{0:.2f}".format(diff))
else:
    print("{0:.2f}".format(y))

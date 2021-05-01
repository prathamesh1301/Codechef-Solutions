for i in range(int(input())):
    n,a,b=map(int,input().split())
    cts=0
    cta=0
    string = list("EQUINOX")
    for j in range(n):
        x=list(input())
        if x[0] in string:
            cts+=a
        else:
            cta+=b
    if(cts>cta):
        print("SARTHAK")
    elif(cta>cts):
        print("ANURADHA")
    else:
        print("DRAW")

t = int(input())

while t > 0:
    t-=1
    a = list(input())
    # print(a)
    if(a[0] == '1'):
        a.insert(1,0)
        # print("roy")
    else:
        a.insert(0,1)
    for i in a:
        print(i, end="")
    print("")

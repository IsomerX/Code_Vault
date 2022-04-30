t = int(input())

while(t>0):
    t-=1
    n = int(input())
    if(n == 2):
        print(-1)
        continue
    r=[]
    for i in range(n):
        temp = []
        for j in range(n):
            temp.append(0)
        r.append(temp)

    to=1
    for i in range(0,n):
        for j in range(0,n):
            if((i+j)%2 == 0):
                r[i][j] = to
                to+=1

    for i in range(0,n):
        for j in range(0,n):
            if((i+j)%2 == 1):
                r[i][j] = to
                to+=1

    to = 0
    for i in range(n):
        for j in range(n):
            print(r[i][j], end = " ")
        print("")
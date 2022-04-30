t = int(input())
while(t):
    n = int(input())
    r = input()
    flag = 1
    op = []
    for i in range(n):
        if(r[i] in op and r[i] != r[i-1]):
            flag=0
            break
        op.append(r[i])
    if(flag):
        print("YES")
    else:
        print("NO")
    t-=1
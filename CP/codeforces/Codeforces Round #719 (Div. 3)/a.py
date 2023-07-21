<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    t-=1
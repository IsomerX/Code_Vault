<<<<<<< HEAD
for i in range(int(input())):
    a, b = map(int, input().split())
    ans = 0
    if(b == 1):
        ans += 1
        b = 2
        while(a != 0):
            a = a//b
            ans+=1
    else:
        while(a != 0):
            a = a//b
            ans+=1
=======
for i in range(int(input())):
    a, b = map(int, input().split())
    ans = 0
    if(b == 1):
        ans += 1
        b = 2
        while(a != 0):
            a = a//b
            ans+=1
    else:
        while(a != 0):
            a = a//b
            ans+=1
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    print(ans)
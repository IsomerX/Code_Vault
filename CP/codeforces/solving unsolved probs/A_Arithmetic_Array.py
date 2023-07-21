<<<<<<< HEAD
for _ in range(int(input())):
    n = int(input())
    ans=0
    arr = list(map(int, input().split()))
    t = sum(arr)
    if t>n:
        print(ans + t - n)
    elif t==n:
        print(0)
    else:
        print(1)
=======
for _ in range(int(input())):
    n = int(input())
    ans=0
    arr = list(map(int, input().split()))
    t = sum(arr)
    if t>n:
        print(ans + t - n)
    elif t==n:
        print(0)
    else:
        print(1)
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

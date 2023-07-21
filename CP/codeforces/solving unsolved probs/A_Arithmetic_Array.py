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

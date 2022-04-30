for _ in range(int(input())):
    temp = input()
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    f = list(map(int, input().split()))

    # manhattan distance between points a and b
    d = abs(a[0] - b[0]) + abs(a[1] - b[1])

    if((f[0] < a[0] and f[0] > b[0] and (f[1] == a[1] == b[1])) or (f[0] > a[0] and f[0] < b[0] and (f[1] == a[1] == b[1])) or (f[1] < a[1] and f[1] > b[1] and (f[0] == a[0] == b[0])) or (f[1] > a[1] and f[1] < b[1] and (f[0] == a[0] == b[0]))):
        print(d + 2)
    else:
        print(d)


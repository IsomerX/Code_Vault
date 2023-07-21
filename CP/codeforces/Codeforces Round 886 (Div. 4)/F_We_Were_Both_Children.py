t= int(input())
for _ in range(t):
    m = {}
    r = int(input())
    arr = list(map(int, input().split()))
    dp =[0]*(r+1)
    for k in arr:
        if(k <= r):
            dp[k] = m.get(k, 0) + 1
    for i in range (1, r+1):
        if(i in m):
            for j in range(i, n+1, i):
                dp[j] += m[i]
    print(max(dp))

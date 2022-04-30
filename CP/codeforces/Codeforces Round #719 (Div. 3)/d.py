t = int(input())

while(t>0):
    t-=1
    n = int(input())
    a = list(map(int,input().split()))
    b = []
    # print(a)
    cnt=0
    m = {}
    for i in range(len(a)):
        b.append(a[i]-i)
        if(b[i] in m):
            cnt+=m[b[i]]
            m[b[i]]+=1
        else:
            m[b[i]] = 1
            
        # for j in range(i+1, len(a)):
        #     if(a[j] - a[i] == j - i):
        #         cnt+=1
        #         print(a[i], a[j])
    print(cnt)
<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    print(cnt)
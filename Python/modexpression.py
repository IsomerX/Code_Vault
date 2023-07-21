<<<<<<< HEAD
t = int(input())
while(t>0):
    n, m = map(int, input().split())
    cnt = 0
    if(m < n):
        for i in range(m, 1, -1):
            for j in range(1, i):
                if((m-m%i)%j == 0):
                    cnt+=1
        cnt += (n+m-1)*(n-m)/2
    else:
        for i in range(n, 1, -1):
            for j in range(1, i):
                if((m-m%i)%j == 0):
                    cnt+=1
    print(cnt)
=======
t = int(input())
while(t>0):
    n, m = map(int, input().split())
    cnt = 0
    if(m < n):
        for i in range(m, 1, -1):
            for j in range(1, i):
                if((m-m%i)%j == 0):
                    cnt+=1
        cnt += (n+m-1)*(n-m)/2
    else:
        for i in range(n, 1, -1):
            for j in range(1, i):
                if((m-m%i)%j == 0):
                    cnt+=1
    print(cnt)
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    t-=1
t = int(input())

def dep(dic, a):
    if(a not in dic):
        return 0
    cnt = 0
    for i in dic[a]:
        cnt += dep(dic, i)+1
    return cnt

cnta = 0

def ade(dic, a, x):
    global cnta
    # if(x not in dic):
    #     cnta += x
    #     return
    sp = {}
    r=1
    for i in dic[a]:
        sp[i] = dep(dic,i)
        
    sp = sorted(sp.items(), key = 
             lambda kv:(kv[1], kv[0]), reverse=True)
    # print(sp)
    for i in sp:
        # print(f'please {cnta}')
        cnta += x*r
        
        # print(f'{i} makes cnta {cnta} by adding {x*r}')
        if(i[0] in dic):
            ade(dic,i[0],x*r)
        r+=1
    return



while(t>0):
    cnta = 0
    n, x = map(int, input().split())
    dic = {}
    for i in range(1,n):
        u,v = map(int, input().split())
        if(u in dic):
            dic[u].append(v)
        else:
            dic[u] = [v]
    # print(dic)
    ade(dic,1, x)

    print((cnta + x)%1000000007)
    # print(f'dep(2) = {dep(dic, 2)}')
    t-=1


t = int(input())

while(t>0):
    t-=1
    n = int(input())
    odd = []
    even = [] 
    for i in list(map(int,input().split())):
        if(i%2):
            odd.append(i)
        else:
            even.append(i)
    ans = []
    if(len(odd) > len(even)):
        for i in range(len(even)):
            ans.append(even[i])
            ans.append(odd[i])
        for i in range(len(even), len(odd)):
            ans.append(odd[i])
    else:
        for i in range(len(odd)):
            ans.append(even[i])
            ans.append(odd[i])
        for i in range(len(odd), len(even)):
            ans.append(even[i])
    print(*ans)
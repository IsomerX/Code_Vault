t = int(input())
def numbermaker(i):
    t = ""
    for o in range(0, len(i)):
        t+= min(i[o],i[len(i)-o-1])
    return t
for op in range(1,t+1):
    t-=1
    n,m = map(int, input().split())
    a=numbermaker(input())
    if(len(a) == 1):
        print("Case #"+str(op) +": " + str(ord(a)-97))
    else:
        r=0
        li =[]
        for i in a:
            li.append(ord(i)-96)
        sum=0
        su=0
        pro=1
        for i in range(len(li)//2):
            if(li[i]!=1):
                su += li[i]-1
                pro*=li[i]-1
        
        sum = pro*su*m 
        if(len(li)%2==1):
            sum+=li[len(li)//2]
        else:
            sum-=1


        print("Case #"+str(op) +": " + str(sum))
    
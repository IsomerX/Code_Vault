import math
t = int(input())

# def check(n):
#     if(n in [1,2,3,4,5,6,7,8,9]):
#         return 1
#     else:
#         temp = []
#         while(n):
#             temp.append(n%10)
#             n//=10
#         trl = True
#         for i in range(len(temp)):
#             if(temp[i-1]!=temp[i]):
#                 return 0
#     return 1

while(t>0):
    t-=1
    n = int(input())
    if(n < 10):
        print(n)
        continue
    cnta = 0
    power = int(math.log10(n))
    cnta+=power*9
    if(10**(power) < n):
        ro = 0
        for i in range(power+1):
            ro+=10**i
        tr = 1
        while(ro*tr<=n):
            cnta+=1
            tr+=1
    # for i in range(1,n+1):
    #     if(check(i)):
    #         cnt+=1
    print(cnta)
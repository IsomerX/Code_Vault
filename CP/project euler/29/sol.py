from math import *
n = 200
ans = []

for i in range(2,n+1):
    for j in range(2,n+1):
        ans.append(i**j)
        # ans.append(round(j*log(i,11),5))
# print(ans)

print(len(set(ans)))
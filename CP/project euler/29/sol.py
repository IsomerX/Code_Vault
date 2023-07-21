<<<<<<< HEAD
from math import *
n = 200
ans = []

for i in range(2,n+1):
    for j in range(2,n+1):
        ans.append(i**j)
        # ans.append(round(j*log(i,11),5))
# print(ans)

=======
from math import *
n = 200
ans = []

for i in range(2,n+1):
    for j in range(2,n+1):
        ans.append(i**j)
        # ans.append(round(j*log(i,11),5))
# print(ans)

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
print(len(set(ans)))
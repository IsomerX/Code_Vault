import numpy as np
n = 100
print(n)

for i in range(n):
    a = np.random.randint(1,10000)
    b = np.random.randint(1,10000)
    if b > a:
        print(a, b)
    else:
        print(b, a)
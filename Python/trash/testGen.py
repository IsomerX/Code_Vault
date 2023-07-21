<<<<<<< HEAD
import numpy as np
n = 100
print(n)

for i in range(n):
    a = np.random.randint(1,10000)
    b = np.random.randint(1,10000)
    if b > a:
        print(a, b)
    else:
=======
import numpy as np
n = 100
print(n)

for i in range(n):
    a = np.random.randint(1,10000)
    b = np.random.randint(1,10000)
    if b > a:
        print(a, b)
    else:
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
        print(b, a)
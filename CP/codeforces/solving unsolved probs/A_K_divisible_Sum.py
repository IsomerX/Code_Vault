<<<<<<< HEAD
from math import ceil
for i in range(int(input())):
    n, k = map(int, input().split())
    cf = (n + k - 1) // k
    k *= cf
=======
from math import ceil
for i in range(int(input())):
    n, k = map(int, input().split())
    cf = (n + k - 1) // k
    k *= cf
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    print((k + n - 1) // n )
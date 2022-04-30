from math import ceil
for i in range(int(input())):
    n, k = map(int, input().split())
    cf = (n + k - 1) // k
    k *= cf
    print((k + n - 1) // n )
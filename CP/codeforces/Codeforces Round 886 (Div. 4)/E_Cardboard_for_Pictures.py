import math
t = int(input())

def calculate_border_width(n, c, s):
    def total_area(w):
        return sum((si + 2 * w) ** 2 for si in s)

    lo, hi = 0, math.sqrt(c)
    while hi - lo > 1:
        mid = lo + (hi - lo) // 2
        if total_area(mid) > c:
            hi = mid
        else:
            lo = mid

    return math.floor(lo)   

for _ in range(t): 
    n, c = map(int, input().split())
    s = list(map(int, input().split()))
    print(calculate_border_width(n, c, s))

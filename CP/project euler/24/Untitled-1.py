
from math import factorial
def ans(n, s):
   if len(s)==1: return s
   q, r = divmod(n, factorial(len(s)-1))
   return s[q] + ans(r, s[:q] + s[q+1:])
print (ans(int(input())-1, '0123456789'))
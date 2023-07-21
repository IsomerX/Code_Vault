<<<<<<< HEAD

from math import factorial
def ans(n, s):
   if len(s)==1: return s
   q, r = divmod(n, factorial(len(s)-1))
   return s[q] + ans(r, s[:q] + s[q+1:])
=======

from math import factorial
def ans(n, s):
   if len(s)==1: return s
   q, r = divmod(n, factorial(len(s)-1))
   return s[q] + ans(r, s[:q] + s[q+1:])
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
print (ans(int(input())-1, '0123456789'))
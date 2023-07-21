<<<<<<< HEAD
for _ in range(int(input())):
     num,n=map(str,input().split(" "))
     num=sorted(num)
     mul=1
     for i in range(int(n)):
          if num[0]!='9':
               num[0]=str(int(num[0])+1)
               num=sorted(num)
     for i in num:
          mul*=int(i)
=======
for _ in range(int(input())):
     num,n=map(str,input().split(" "))
     num=sorted(num)
     mul=1
     for i in range(int(n)):
          if num[0]!='9':
               num[0]=str(int(num[0])+1)
               num=sorted(num)
     for i in num:
          mul*=int(i)
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
     print(mul)
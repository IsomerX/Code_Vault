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
     print(mul)
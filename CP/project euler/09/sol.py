<<<<<<< HEAD
ans = 0
def r(a,b,c):
    if(a**2 +b**2 == c**2):
        return 0
    elif(a**2 +b**2 >= c**2):
        return 1
    elif(a**2 +b**2 <= c**2):
        return -1
for c in range(3,1001):
    for a in range(1, c-2):
        high = c-1
        low = a+1
        mid=int((high + low)/2)
        b=mid
        while(r(a,b,c)!=0):
            if(r(a,b,c) < 0):
                mid = int((mid+1+high)/2)
            else:
                mid = int((mid+1+low)/2)
            b = mid
        if(r(a,b,c)):
            print(a,b,c)


=======
ans = 0
def r(a,b,c):
    if(a**2 +b**2 == c**2):
        return 0
    elif(a**2 +b**2 >= c**2):
        return 1
    elif(a**2 +b**2 <= c**2):
        return -1
for c in range(3,1001):
    for a in range(1, c-2):
        high = c-1
        low = a+1
        mid=int((high + low)/2)
        b=mid
        while(r(a,b,c)!=0):
            if(r(a,b,c) < 0):
                mid = int((mid+1+high)/2)
            else:
                mid = int((mid+1+low)/2)
            b = mid
        if(r(a,b,c)):
            print(a,b,c)


>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

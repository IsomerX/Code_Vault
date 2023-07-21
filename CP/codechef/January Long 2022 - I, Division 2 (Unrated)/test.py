<<<<<<< HEAD
n = int(input())

for i in range(n):
        for j in range(n - i):
                print(" ", end=" ")
        print("*", end = " ")
        for j in range(2*i-1):
                print(" ", end=" ")
        if(i != 0):
                print("*", end=" ")
        for j in range(2*(n-i - 1)):
                print(" ", end=" ")
        print("*", end = " ")
        for j in range(2*i - 1):
                print(" ", end=" ")
        if(i!=0):
                print("*")
        else:
=======
n = int(input())

for i in range(n):
        for j in range(n - i):
                print(" ", end=" ")
        print("*", end = " ")
        for j in range(2*i-1):
                print(" ", end=" ")
        if(i != 0):
                print("*", end=" ")
        for j in range(2*(n-i - 1)):
                print(" ", end=" ")
        print("*", end = " ")
        for j in range(2*i - 1):
                print(" ", end=" ")
        if(i!=0):
                print("*")
        else:
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
                print("")
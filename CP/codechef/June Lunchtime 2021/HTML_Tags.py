<<<<<<< HEAD
t = int(input())

def check(a):
    if(a[0] != '<'):
        print("Error")
        return 
    if(a[1] != '/'):
        print("Error")
        return 
    if(a[-1] != '>'):
        print("Error")
        return 
    s = a[2:-1]
    if(a[2] == '>'):
        print("Error")
        return
    for i in s:
        if(ord(i) >= 97 and ord(i) <= 122):
            continue
        if(ord(i) >= 48 and ord(i) <= 57):
            continue 
        print("Error")
        return
    print("Success")
    return

while(t>0):
    t-=1 
    a = list(input())
=======
t = int(input())

def check(a):
    if(a[0] != '<'):
        print("Error")
        return 
    if(a[1] != '/'):
        print("Error")
        return 
    if(a[-1] != '>'):
        print("Error")
        return 
    s = a[2:-1]
    if(a[2] == '>'):
        print("Error")
        return
    for i in s:
        if(ord(i) >= 97 and ord(i) <= 122):
            continue
        if(ord(i) >= 48 and ord(i) <= 57):
            continue 
        print("Error")
        return
    print("Success")
    return

while(t>0):
    t-=1 
    a = list(input())
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
    check(a)
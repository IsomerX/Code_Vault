<<<<<<< HEAD
t = int(input())

bottles = {}
opener = []

for i in range(t):
    a, b = map(int, input().split())
    if(a not in bottles):
        bottles[a] = 1
    else:
        bottles[a] += 1
    opener.append(b)

set_opener = set(opener)

ans = 0

for i in set_opener:
    if(i in bottles):
        ans += bottles[i]

print(t - ans)
=======
t = int(input())

bottles = {}
opener = []

for i in range(t):
    a, b = map(int, input().split())
    if(a not in bottles):
        bottles[a] = 1
    else:
        bottles[a] += 1
    opener.append(b)

set_opener = set(opener)

ans = 0

for i in set_opener:
    if(i in bottles):
        ans += bottles[i]

print(t - ans)
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

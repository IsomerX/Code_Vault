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

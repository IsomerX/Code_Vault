t = ['H','Q','9']

r= input()

f=False

for i in r:
    if i in t:
        print('YES')
        f=True
        break
if(not f):
    print('NO')

t = input().split('+')
t = [int(i) for i in t]

t = sorted(t)
t=[str(i) for i in t]

print('+'.join(t))

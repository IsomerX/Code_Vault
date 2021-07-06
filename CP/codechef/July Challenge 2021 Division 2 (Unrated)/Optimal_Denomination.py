def gcd(a, b):
    if a == 0:
        return b
    elif b == 0:
        return a
    elif b > a:
        return gcd(b, a)
    else:
        return gcd(b, a % b)

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    if len(arr) == 1:
        print(1)
    else:
        leftgcd = [0]*(n)
        rightgcd = [0]*(n)
        midgcd = [0]*(n)

    temp = 0
    for key, val in enumerate(arr):
        leftgcd[key] = temp
    if temp == 0:
        temp = val
    else:
        temp = gcd(temp, val)
    temp = 0
    for i in range(n-1, -1, -1):
        key = i
    val = arr[key]
    rightgcd[key] = temp
    if temp == 0:
    temp = val
    else:
    temp = gcd(temp, val)


for i in range(n):
if leftgcd[i] == 0:
midgcd[i] = rightgcd[i]
elif rightgcd[i] == 0:
midgcd[i] = leftgcd[i]
else:
midgcd[i] = gcd(leftgcd[i], rightgcd[i])
mx = [0, 0]
for key, val in enumerate(midgcd):
mx = max(mx, [val, arr[key]])
for key, val in enumerate(midgcd):
if val == mx[0] and arr[key] == mx[1]:
temp = key
tempval = val
arr[temp] = tempval
sm = 0
for item in arr:
sm += item//tempval
print(sm)

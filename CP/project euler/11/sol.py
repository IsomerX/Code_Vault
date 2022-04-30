r = []
num = 4
for i in range(20):
    for j in input().split():
        r.append(int(j))
pre = 1
lister = []
for i in range(num):
    pre*=r[i]
    lister.append(r[i])
romax = pre
i = num
while(i<len(r)):
    lister.append(r[i])
    lister.pop(0)
    pre = 1
    for k in lister:
        pre*=k
        # if(pre > romax):
        #     print(lister)
    romax = max(romax,pre)
    i+=1
print(romax)

# up and down 
grid = []
for i in range(20):
    temp=[]
    for j in range(20):
        temp.append(r[i*20+j])  
    grid.append(temp)

downmax = 0
for op in range(20):
    pre = 1
    lister = []
    for i in range(num):
        pre*=grid[op][i]
        lister.append(grid[i][op])
    umax = pre
    i = num
    while(i<20):
        lister.append(grid[i][op])
        lister.pop(0)
        pre = 1
        for k in lister:
            pre*=k
            # if(pre > umax):
            #     print(lister)
        umax = max(umax,pre)
        i+=1
    downmax = max(umax, downmax)
print(downmax)

# pre = 1
# for i in range(4):
#     pre *= grid[i][i]
diagmax = 0
for i in range(16):
    for j in range(16):
        pre=1
        for u in range(4):
            pre*=grid[i+u][j+u]
        if(pre > diagmax):
            print(grid[i][j])
        diagmax = max(diagmax,pre)
print(diagmax)
                
diagmax2 = 0
for i in range(16):
    for j in range(19, 2, -1):
        pre=1
        for u in range(4):
            pre*=grid[i+u][j-u]
        # if(pre > diagmax):
        #     print(grid[i][j])
        diagmax2 = max(diagmax2,pre)
print(diagmax2)

r, c = map(int, input().split())
m = []
start = ()
end = ()
visited = {}
que = []

for i in range(r):
    temp = input()
    m.append(temp)
frid = {}
for i in range(r):
    for j in range(c):
        visited[(i,j)] = 0

        if(m[i][j] == 's'):
            start = (i, j)

        if(m[i][j] == 'e'):
            end = (i, j)
        frid[(i,j)] = []

        dc = [-1, 1, 0, 0]
        dr = [0, 0, -1, 1]
        for k in range(4):
            if(i+dr[k] < 0 or j+dc[k] < 0): continue
            if(i+dr[k] >= r or j+dc[k] >=c): continue
            if m[i+dr[k]][j + dc[k]] != '#':
                frid[(i,j)].append((i+dr[k], j + dc[k]))
# print(frid)

def dfs(i,j, cnt):
    if((i,j) == end):
        print(f'count = {cnt}')
        que.clear()
        print("found it")
        return
    if(visited[(i,j)]):
        que.pop(0)
        if(len(que) == 0):
            return
        dfs(que[0][0], que[0][1], cnt+1)
    visited[(i,j)] = 1
    for (h,k) in frid[(i,j)]:
        que.append((h,k))
    que.pop(0)
    dfs(que[0][0], que[0][1], cnt+1)

que.append((start[0],start[1]))
dfs(start[0],start[1], 0)
        

# sample input
# 5 7
# s..#...
# .#...#.
# .#.....
# ..##...
# #.#e.#.
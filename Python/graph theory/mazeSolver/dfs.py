# 1 2
# 2 4
# 3 5
# 2 3
# 1 6
# 6 7
# 6 8

n = int(input())

grid = {}

for i in range(n-1):
    u,v = map(int, input().split())
    if(u in grid):
        grid[u].append(v)
    else:
        grid[u] = [v]

def dfs(u):
    if(u not in grid):
        print(u)
        return
    print(u)
    for i in grid[u]:
        dfs(i)
    return

print(grid)
dfs(2)


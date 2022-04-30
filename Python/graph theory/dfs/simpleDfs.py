n = int(input())

graph = {}

for i in range(n-1):
    u,v = map(int, input().split())
    if(u in graph):
        graph[u].append(v)
    else:
        graph[u] = [v]

b = [False]*(n+1)

def dfs(at):
    if(b[at]):
        return
    b[at] = True
    print(at)
    if(at not in graph):
        return 
    ror = graph[at]
    for j in ror:
        dfs(j)

print(graph)

start = 1

dfs(start)
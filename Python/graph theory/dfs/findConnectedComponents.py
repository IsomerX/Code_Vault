n = int(input())

graph = {}
count = 0

for i in range(n-1):
    u,v = map(int, input().split())
    if(u in graph):
        graph[u].append(v)
    else:
        graph[u] = [v]

b = [False]*(n+1)

def finder():
    count = 0
    for i in range(1, n+1):
        if(not b[i]):
            count+=1
            dfs(i)
    return count

def dfs(at):
    if(b[at]):
        return
    b[at] = True

    if(at not in graph):
        return 

    for j in graph[at]:
        dfs(j)

print(graph)
print(finder())
<<<<<<< HEAD
t = int(input())

graph = []
visited = []

count = 0

def dfs(i,j):
    global count
    if(not graph[i][j]):
        visited[i][j] = 1
        return
    count+=1
    print(f'currently at ({i}, {j}) with {count}')
    for k in range(0,len(graph[0])):
        if(graph[i][k] and not visited[i][k] and k!=j):
            visited[i][k] = 1
            dfs(i,k)
            print(f'columwise count = {count}')
            count = 0
        if(graph[k][j] and not visited[k][j] and k!=i):
            visited[k][j] = 1
            dfs(k,j)
            print(f'columwise count = {count}')
            count = 0
        if(graph[j][k] and not visited[j][k]):
            visited[j][k] = 1
            dfs(j,k)
            print(f'somehow {count}')
            count =0
        if(graph[k][i] and not visited[k][i]):
            visited[k][i] = 1
            dfs(k,i)
            print(f'somehow2 {count}')
            count = 0
    
    return

while(t>0):
    n = int(input())
    graph = []
    visited = []
    for i in range(n+1):
        graph.append([0]*(n+1))
        visited.append([0]*(n+1))

    for i in range(n-1):
        u,v = map(int, input().split())
        graph[u][v] = 1

    for i in range(n+1):
        for j in range(n+1):
            if(visited[i][j]):
                continue
            elif(graph[i][j] == 1):
                visited[i][j] = 1
                count = 0
                dfs(i,j)
                print(count)










    # dr = [-1, 1, 0, 0]
    # dc = [0, 0, 1, -1]

    # for i in range(n+1):
    #     for j in range(n+1):
    #         if(graph[i][j]):
    #             for k in range(4):
    #                 rr = i+dr[k]
    #                 cc = j+dc[k]
    #                 if(rr > n or cc > n):continue
    #                 if(rr <0 or cc < 0):continue
    #                 if(graph[rr][cc]):
    #                     print(f'{i},{j} has a neighbor at {rr}, {cc}')
    #             print("")



    for i in graph:
        print(i)
    t-=1


=======
t = int(input())

graph = []
visited = []

count = 0

def dfs(i,j):
    global count
    if(not graph[i][j]):
        visited[i][j] = 1
        return
    count+=1
    print(f'currently at ({i}, {j}) with {count}')
    for k in range(0,len(graph[0])):
        if(graph[i][k] and not visited[i][k] and k!=j):
            visited[i][k] = 1
            dfs(i,k)
            print(f'columwise count = {count}')
            count = 0
        if(graph[k][j] and not visited[k][j] and k!=i):
            visited[k][j] = 1
            dfs(k,j)
            print(f'columwise count = {count}')
            count = 0
        if(graph[j][k] and not visited[j][k]):
            visited[j][k] = 1
            dfs(j,k)
            print(f'somehow {count}')
            count =0
        if(graph[k][i] and not visited[k][i]):
            visited[k][i] = 1
            dfs(k,i)
            print(f'somehow2 {count}')
            count = 0
    
    return

while(t>0):
    n = int(input())
    graph = []
    visited = []
    for i in range(n+1):
        graph.append([0]*(n+1))
        visited.append([0]*(n+1))

    for i in range(n-1):
        u,v = map(int, input().split())
        graph[u][v] = 1

    for i in range(n+1):
        for j in range(n+1):
            if(visited[i][j]):
                continue
            elif(graph[i][j] == 1):
                visited[i][j] = 1
                count = 0
                dfs(i,j)
                print(count)










    # dr = [-1, 1, 0, 0]
    # dc = [0, 0, 1, -1]

    # for i in range(n+1):
    #     for j in range(n+1):
    #         if(graph[i][j]):
    #             for k in range(4):
    #                 rr = i+dr[k]
    #                 cc = j+dc[k]
    #                 if(rr > n or cc > n):continue
    #                 if(rr <0 or cc < 0):continue
    #                 if(graph[rr][cc]):
    #                     print(f'{i},{j} has a neighbor at {rr}, {cc}')
    #             print("")



    for i in graph:
        print(i)
    t-=1


>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

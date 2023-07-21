<<<<<<< HEAD
# at the bottom of the page are given some example of the inputs, 
# uncomment the example starting from 10 and put it when it asks 
# for it in the input

import os
from time import sleep
import sys

n = int(input())
grid = []
adj = {}
for i in range(n):
    grid.append(input())

# print(grid)
visited = []
tor = []
for i in range(n):
    temp = []
    for j in range(len(grid[0])):
        temp.append(0)
    visited.append(temp)
    tor.append(temp)
start = ()
end = ()
# print(visited)
for i in range(n):
    for j in range(len(grid[0])):
        if(grid[i][j] == 's'):
            start = (i,j)
        if(grid[i][j] == 'E'):
            end = (i,j)
        if(grid[i][j]!='#'):
            dr = [1,0,-1,0]
            dc = [0,1,0,-1]
            for k in range(4):
                rr = i + dr[k]
                cc = j + dc[k]
                if(rr >= n or cc >= len(grid[0])):continue
                if(rr<0 or cc < 0):continue
                if(grid[rr][cc] != '#'):
                    if (i,j) not in adj:
                        adj[(i,j)] = [(rr,cc)]
                    else:
                        adj[(i,j)].append((rr,cc))

def screen_clear():
   # for mac and linux(here, os.name is 'posix')
   if os.name == 'posix':
      _ = os.system('clear')
   else:
      # for windows platfrom
      _ = os.system('cls')

def dfs(i,j, count, path):
    global grid
    count+=1
    # print(f'{i}, {j}, count = {count}')

    sleep(0.3)
    screen_clear()
    path.append((i,j))
    if(visited[i][j]):
        return
    # if((i,j)!= start and visited[i][j]):
    #     return
    print("===================")
    op=0
    frid = []
    for k in grid:
        if(op == i):
            t = k[:j] + 'O' + k[j+1:]
            frid.append(t)
        else:
            frid.append(k)
        print(frid[op])
        op+=1
    grid = frid

    visited[i][j] = 1
    # print(count)
    if((i,j) == end):
        print("found it")
        # print(path)
        for i, j in path:
            tor[i][j] = 1
        for i in tor:
            print(i)
        sys.exit(0)
    for (r,c) in adj[(i,j)]:
        # print(adj[(i,j)])
        dfs(r,c, count, path)
    return

rqueue = []
cqueue = []

def bfs(i,j, count):
    global grid
    # print(visited)
    count+=1
    if(visited[i][j]):
        return
    print(f'{i}, {j}, count = {count}')

    op=0
    frid = []
    for k in grid:
        if(op == i):
            t = k[:j] + 'O' + k[j+1:]
            frid.append(t)
        else:
            frid.append(k)
        print(frid[op])
        op+=1
    grid = frid

    sleep(.2)
    screen_clear()

    for (r,c) in adj[(i,j)]:
        # print(r,c,i,j)
        # print(visited[r][c])
        if(visited[r][c]==0):
            # print(r,c)
            rqueue.append(r)
            cqueue.append(c)
    # print(f'1{visited}')
    # op=0
    # frid = []
    # for k in grid:
    #     if(op == i):
    #         t = k[:j] + '*' + k[j+1:]
    #         frid.append(t)
    #     else:
    #         frid.append(k)
    #     print(frid[op])
    #     op+=1
    if(grid[i][j] == 'E'):
        print("found it")
        sys.exit(0)
    visited[i][j] = 1
    # print(f'rqueue = {rqueue} cqueue = {cqueue}')
    if(len(rqueue) != 0):
        a = rqueue[0]
        rqueue.pop(0)
        b = cqueue[0]
        cqueue.pop(0)
        bfs(a,b, count)
    return

# dfs(start[0], start[1], 0, [])   
bfs(start[0],start[1], 0) 
while(len(rqueue)!=0):
    a = rqueue[0]
    rqueue.pop(0)
    b = cqueue[0]
    cqueue.pop(0)
    bfs(a,b, 0)

# print(visited)
# visited[0][1] = 1
# print(visited)
# print(adj)
# print(visited)


# 10
# #s##############
# #.#.............
# #...#.##......#.
# ###.#....#....#.
# #...#..#.#.####.
# #.####.#.#.#....
# #....#.#.#.#..#.
# #.##.#.#.###..#.
# #.#..#.#.#....#.
# ###############e

# 10
# #s##############
# #...............
# #...............
# #...............
# #...............
# #...............
# #...............
# #...............
# #...............
# ###############E

# 10
# #s##############
# #.#.....#.#..#..
# #.#.###.#....#..
# #.#...#.#.#.....
# #...#.#.#.#.....
# #...#.#.#.####..
# #.###.#...#.#...
# #.#...#.#.#.###.
# #.....#.#.#.....
# ###############E

# 8
# ####################
# #.E.#...#...#......#
# #.#.#.#.#.#.#.#.##.# 
# #.#...#...#...#.#.##
# #.#############.#..#
# #.####..#####...#.##
# #......########...s#
# ####################



=======
# at the bottom of the page are given some example of the inputs, 
# uncomment the example starting from 10 and put it when it asks 
# for it in the input

import os
from time import sleep
import sys

n = int(input())
grid = []
adj = {}
for i in range(n):
    grid.append(input())

# print(grid)
visited = []
tor = []
for i in range(n):
    temp = []
    for j in range(len(grid[0])):
        temp.append(0)
    visited.append(temp)
    tor.append(temp)
start = ()
end = ()
# print(visited)
for i in range(n):
    for j in range(len(grid[0])):
        if(grid[i][j] == 's'):
            start = (i,j)
        if(grid[i][j] == 'E'):
            end = (i,j)
        if(grid[i][j]!='#'):
            dr = [1,0,-1,0]
            dc = [0,1,0,-1]
            for k in range(4):
                rr = i + dr[k]
                cc = j + dc[k]
                if(rr >= n or cc >= len(grid[0])):continue
                if(rr<0 or cc < 0):continue
                if(grid[rr][cc] != '#'):
                    if (i,j) not in adj:
                        adj[(i,j)] = [(rr,cc)]
                    else:
                        adj[(i,j)].append((rr,cc))

def screen_clear():
   # for mac and linux(here, os.name is 'posix')
   if os.name == 'posix':
      _ = os.system('clear')
   else:
      # for windows platfrom
      _ = os.system('cls')

def dfs(i,j, count, path):
    global grid
    count+=1
    # print(f'{i}, {j}, count = {count}')

    sleep(0.3)
    screen_clear()
    path.append((i,j))
    if(visited[i][j]):
        return
    # if((i,j)!= start and visited[i][j]):
    #     return
    print("===================")
    op=0
    frid = []
    for k in grid:
        if(op == i):
            t = k[:j] + 'O' + k[j+1:]
            frid.append(t)
        else:
            frid.append(k)
        print(frid[op])
        op+=1
    grid = frid

    visited[i][j] = 1
    # print(count)
    if((i,j) == end):
        print("found it")
        # print(path)
        for i, j in path:
            tor[i][j] = 1
        for i in tor:
            print(i)
        sys.exit(0)
    for (r,c) in adj[(i,j)]:
        # print(adj[(i,j)])
        dfs(r,c, count, path)
    return

rqueue = []
cqueue = []

def bfs(i,j, count):
    global grid
    # print(visited)
    count+=1
    if(visited[i][j]):
        return
    print(f'{i}, {j}, count = {count}')

    op=0
    frid = []
    for k in grid:
        if(op == i):
            t = k[:j] + 'O' + k[j+1:]
            frid.append(t)
        else:
            frid.append(k)
        print(frid[op])
        op+=1
    grid = frid

    sleep(.2)
    screen_clear()

    for (r,c) in adj[(i,j)]:
        # print(r,c,i,j)
        # print(visited[r][c])
        if(visited[r][c]==0):
            # print(r,c)
            rqueue.append(r)
            cqueue.append(c)
    # print(f'1{visited}')
    # op=0
    # frid = []
    # for k in grid:
    #     if(op == i):
    #         t = k[:j] + '*' + k[j+1:]
    #         frid.append(t)
    #     else:
    #         frid.append(k)
    #     print(frid[op])
    #     op+=1
    if(grid[i][j] == 'E'):
        print("found it")
        sys.exit(0)
    visited[i][j] = 1
    # print(f'rqueue = {rqueue} cqueue = {cqueue}')
    if(len(rqueue) != 0):
        a = rqueue[0]
        rqueue.pop(0)
        b = cqueue[0]
        cqueue.pop(0)
        bfs(a,b, count)
    return

# dfs(start[0], start[1], 0, [])   
bfs(start[0],start[1], 0) 
while(len(rqueue)!=0):
    a = rqueue[0]
    rqueue.pop(0)
    b = cqueue[0]
    cqueue.pop(0)
    bfs(a,b, 0)

# print(visited)
# visited[0][1] = 1
# print(visited)
# print(adj)
# print(visited)


# 10
# #s##############
# #.#.............
# #...#.##......#.
# ###.#....#....#.
# #...#..#.#.####.
# #.####.#.#.#....
# #....#.#.#.#..#.
# #.##.#.#.###..#.
# #.#..#.#.#....#.
# ###############e

# 10
# #s##############
# #...............
# #...............
# #...............
# #...............
# #...............
# #...............
# #...............
# #...............
# ###############E

# 10
# #s##############
# #.#.....#.#..#..
# #.#.###.#....#..
# #.#...#.#.#.....
# #...#.#.#.#.....
# #...#.#.#.####..
# #.###.#...#.#...
# #.#...#.#.#.###.
# #.....#.#.#.....
# ###############E

# 8
# ####################
# #.E.#...#...#......#
# #.#.#.#.#.#.#.#.##.# 
# #.#...#...#...#.#.##
# #.#############.#..#
# #.####..#####...#.##
# #......########...s#
# ####################



>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

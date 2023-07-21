<<<<<<< HEAD
grid = []
def ini():
    grid.clear()
    for i in range(3):
        temp = []
        for j in range(3):
            temp.append(" ")
        grid.append(temp)
def win(grid,c):
    if(grid[0][0] == grid[0][1] == grid[0][2] == c):
        return True 
    if(grid[1][0] == grid[1][1] == grid[1][2] == c):
        return True 
    if(grid[2][0] == grid[2][1] == grid[2][2] == c):
        return True 
    if(grid[0][0] == grid[1][0] == grid[2][0] == c):
        return True
    if(grid[0][1] == grid[1][1] == grid[2][1] == c):
        return True 
    if(grid[0][2] == grid[1][2] == grid[2][2] == c):
        return True 
    if(grid[0][0] == grid[1][1] == grid[2][2] == c):
        return True 
    if(grid[2][0] == grid[1][1] == grid[0][2] == c):
        return True 
    return False
def show(grid):
    print()
    for i in grid:
        print(*i, sep = '|')
        print("-----")
def minimax(arr, toMax):
    if(win(arr, 'O')):
        # print("o won")
        return -1
    if(win(arr, 'X')):
        # print("x won")
        return 1
    f=False
    for i in arr:
        for j in i:
            if(j == " "):
                f= True
    if(not f):
        return 0
    if(toMax):
        best = -10
        for i in range(3):
            for j in range(3):
                if(arr[i][j] == " "):
                    arrcpy = [row[:] for row in arr]
                    arrcpy[i][j] = 'X'
                    best = max(best, minimax(arrcpy, False))
        return best
    else:
        best = 10
        for i in range(3):
            for j in range(3):
                if(arr[i][j] == " "):
                    arrcpy = [row[:] for row in arr]
                    arrcpy[i][j] = 'O'
                    best = min(best, minimax(arrcpy, True))
                    # show(grid)
        return best
    return 10
while(1):
    turn = 0
    ini()
    while(not win(grid, 'X') and not win(grid,'O')):
        if(turn == 9):
            print("DRAW!!")
            break
        if(turn%2):
            best = [-1, -1]
            bestScore = 10
            for i in range(3):
                for j in range(3):
                    if(grid[i][j] == " "):
                        grid[i][j] = 'X'
                        temp = minimax(grid, False)
                        grid[i][j] = " "
                        if(temp < bestScore):
                            best = [i,j]
                            bestScore = temp
            grid[best[0]][best[1]] = 'O'
            if(win(grid,'O')):
                print(f"Player {turn%2} Won!")
        else:
            best = [-1, -1]
            bestScore = -10
            for i in range(3):
                for j in range(3):
                    if(grid[i][j] == " "):
                        grid[i][j] = 'X'
                        temp = minimax(grid, False)
                        grid[i][j] = " "
                        if(temp > bestScore):
                            best = [i,j]
                            bestScore = temp
            grid[best[0]][best[1]] = 'X'
            if(win(grid, 'X')):
                print(f"Player {turn%2} Won!")
        show(grid)
        turn+=1

    ch = input("play again?: ").lower()
    if(ch == 'n'):
        break
=======
grid = []
def ini():
    grid.clear()
    for i in range(3):
        temp = []
        for j in range(3):
            temp.append(" ")
        grid.append(temp)
def win(grid,c):
    if(grid[0][0] == grid[0][1] == grid[0][2] == c):
        return True 
    if(grid[1][0] == grid[1][1] == grid[1][2] == c):
        return True 
    if(grid[2][0] == grid[2][1] == grid[2][2] == c):
        return True 
    if(grid[0][0] == grid[1][0] == grid[2][0] == c):
        return True
    if(grid[0][1] == grid[1][1] == grid[2][1] == c):
        return True 
    if(grid[0][2] == grid[1][2] == grid[2][2] == c):
        return True 
    if(grid[0][0] == grid[1][1] == grid[2][2] == c):
        return True 
    if(grid[2][0] == grid[1][1] == grid[0][2] == c):
        return True 
    return False
def show(grid):
    print()
    for i in grid:
        print(*i, sep = '|')
        print("-----")
def minimax(arr, toMax):
    if(win(arr, 'O')):
        # print("o won")
        return -1
    if(win(arr, 'X')):
        # print("x won")
        return 1
    f=False
    for i in arr:
        for j in i:
            if(j == " "):
                f= True
    if(not f):
        return 0
    if(toMax):
        best = -10
        for i in range(3):
            for j in range(3):
                if(arr[i][j] == " "):
                    arrcpy = [row[:] for row in arr]
                    arrcpy[i][j] = 'X'
                    best = max(best, minimax(arrcpy, False))
        return best
    else:
        best = 10
        for i in range(3):
            for j in range(3):
                if(arr[i][j] == " "):
                    arrcpy = [row[:] for row in arr]
                    arrcpy[i][j] = 'O'
                    best = min(best, minimax(arrcpy, True))
                    # show(grid)
        return best
    return 10
while(1):
    turn = 0
    ini()
    while(not win(grid, 'X') and not win(grid,'O')):
        if(turn == 9):
            print("DRAW!!")
            break
        if(turn%2):
            best = [-1, -1]
            bestScore = 10
            for i in range(3):
                for j in range(3):
                    if(grid[i][j] == " "):
                        grid[i][j] = 'X'
                        temp = minimax(grid, False)
                        grid[i][j] = " "
                        if(temp < bestScore):
                            best = [i,j]
                            bestScore = temp
            grid[best[0]][best[1]] = 'O'
            if(win(grid,'O')):
                print(f"Player {turn%2} Won!")
        else:
            best = [-1, -1]
            bestScore = -10
            for i in range(3):
                for j in range(3):
                    if(grid[i][j] == " "):
                        grid[i][j] = 'X'
                        temp = minimax(grid, False)
                        grid[i][j] = " "
                        if(temp > bestScore):
                            best = [i,j]
                            bestScore = temp
            grid[best[0]][best[1]] = 'X'
            if(win(grid, 'X')):
                print(f"Player {turn%2} Won!")
        show(grid)
        turn+=1

    ch = input("play again?: ").lower()
    if(ch == 'n'):
        break
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

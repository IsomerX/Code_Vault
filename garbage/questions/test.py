<<<<<<< HEAD
class node:
    def __init__(self):
        self.left = None
        self.right = None
        self.val = 0

cnt = 0

def init(curr, h, root):
    global cnt
    if(curr == h):
        return
    root.left = node()
    root.right = node()
    init(curr+1, h, root.left)
    init(curr+1, h, root.right)
    return

def enter(root):
    global cnt
    if(not root):
        return
    root.key = cnt
    cnt-=1
    enter(root.right)
    enter(root.left)

def findParent(root : node, val : int, parent : int) -> None:
    if (root is None):
        return
 
    if (root.key == val):
        print(parent, end="")
        return(parent)
    else:
        findParent(root.left,
                   val, root.key)
        findParent(root.right,
                   val, root.key)

def solution(n, r):
    global cnt
    cnt = 2**n - 1
    root = node()
    init(1, n, root)
    enter(root) 
    # rr = []
    for i in range(len(r)):
        findParent(root, r[i], -1)
        if(i != len(r)-1):
            print(",", end="")
        # rr.append(q)
    

=======
class node:
    def __init__(self):
        self.left = None
        self.right = None
        self.val = 0

cnt = 0

def init(curr, h, root):
    global cnt
    if(curr == h):
        return
    root.left = node()
    root.right = node()
    init(curr+1, h, root.left)
    init(curr+1, h, root.right)
    return

def enter(root):
    global cnt
    if(not root):
        return
    root.key = cnt
    cnt-=1
    enter(root.right)
    enter(root.left)

def findParent(root : node, val : int, parent : int) -> None:
    if (root is None):
        return
 
    if (root.key == val):
        print(parent, end="")
        return(parent)
    else:
        findParent(root.left,
                   val, root.key)
        findParent(root.right,
                   val, root.key)

def solution(n, r):
    global cnt
    cnt = 2**n - 1
    root = node()
    init(1, n, root)
    enter(root) 
    # rr = []
    for i in range(len(r)):
        findParent(root, r[i], -1)
        if(i != len(r)-1):
            print(",", end="")
        # rr.append(q)
    

>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
solution(5, [19, 14, 28])
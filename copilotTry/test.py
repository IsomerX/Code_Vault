import pandas as pd 
import numpy as np

list = {}

n = int(input())
for i in range(n):
    list[i+1] = []

for i in range(n-1):
    a,b = map(int,input().split())
    list[a].append(b)

# q = int(input())

# function to print path between two nodes in a adj list

def printer(a,b, list):
    if(a == b):
        print(a)
    elif(b in list[a]):
        print('-'.join([str(a),str(b)]))
    else:
        for i in list[a]:
            printer(i,b,list)
            break
    return 

printer(2,6,list)
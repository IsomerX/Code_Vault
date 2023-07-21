# Python3 program to find all the reachable nodes
# for every node present in arr[0..n-1]
from collections import deque

def addEdge(v, w):
	
	global visited, adj
	adj[v].append(w)
	adj[w].append(v)

def BFS(componentNum, src):
	
	global visited, adj
	
	# Mark all the vertices as not visited
	# Create a queue for BFS
	#a = visited
	queue = deque()

	queue.append(src)

	# Assign Component Number
	visited[src] = 1

	# Vector to store all the reachable
	# nodes from 'src'
	reachableNodes = []
	#print("0:",visited)

	while (len(queue) > 0):
		
		# Dequeue a vertex from queue
		u = queue.popleft()

		reachableNodes.append(u)

		# Get all adjacent vertices of the dequeued
		# vertex u. If a adjacent has not been visited,
		# then mark it visited nd enqueue it
		for itr in adj[u]:
			if (visited[itr] == 0):
				
				# Assign Component Number to all the
				# reachable nodes
				visited[itr] = 1
				queue.append(itr)

	return reachableNodes

# Display all the Reachable Nodes
# from a node 'n'
def displayReachableNodes(m):
	
	for i in m:
		print(i, end = " ")

	print()

def findReachableNodes(arr, n):
	
	global V, adj, visited
	
	# Get the number of nodes in the graph

	# Map to store list of reachable Nodes for a
	# given node.
	a = []

	# Initialize component Number with 0
	componentNum = 0

	# For each node in arr[] find reachable
	# Nodes
	for i in range(n):
		u = arr[i]

		# Visit all the nodes of the component
		if (visited[u] == 0):
			componentNum += 1

			# Store the reachable Nodes corresponding
			# to the node 'i'
			a = BFS(componentNum, u)

		# At this point, we have all reachable nodes
		# from u, prthem by doing a look up in map m.
		print("Reachable Nodes from ", u, " are")
		displayReachableNodes(a)

n = int(input())
adj = [[] for i in range(n + 1)]
visited = [0 for i in range(n + 1)]

for i in range(n-1):
    u, v = map(int, input().split())
    addEdge(u,v)

# For every ith element in the arr
# find all reachable nodes from query[i]
arr = [i for i in range(1,n+1)]

# Find number of elements in Set
n = len(arr)

findReachableNodes(arr, n)


// You are given a tree (connected, undirected, acyclic graph) consisting of N nodes. Based on this tree, you have to answer Q queries.

// Each query is of the form:
// K D V1 V2 ⋯ VK - output the number of pairs (i,j), 1≤i<j≤K, such that the shortest path between nodes Vi and Vj in the tree has D edges.
// Input
// The first line contains an integer T, the number of test cases. Then the test cases follow.
// The first line of each test case contains two integers, N and Q.
// N−1 lines follow. Each line consists of two integers u and v, indicating that there is an edge between nodes u and v in the tree.
// Q lines follow. Each line describes a query in the format given above.
// Output
// For each query, output the answer on a new line.
// Sample Input
// 1
// 5 2
// 1 2
// 1 3
// 2 4
// 4 5
// 3 2 2 3 5
// 2 4 1 3
// Sample Output
// 2
// 0
// Explanation
// The tree is shown below.

// 1
//   2
//     3

// The shortest path between nodes 1 and 2 has 2 edges.
// The shortest path between nodes 1 and 3 has 2 edges.
// The shortest path between nodes 2 and 4 has 1 edge.
// The shortest path between nodes 3 and 5 has 1 edge.
// The shortest path between nodes 4 and 5 has 1 edge.
// The shortest path between nodes 4 and 5 has 1 edge.
// So, the answer for the first query is 2.
// The answer for the second query is 0.

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Edge {
        int from, to, cost;
    Edge(int from, int to, int cost) : from(from), to(to), cost(cost) {}
};

struct HeapNode {
    int v;
    int d;
    int prev;
    HeapNode(int v, int d, int prev) : v(v), d(d), prev(prev) {}
};

bool operator < (const HeapNode &a, const HeapNode &b) {
    return a.d > b.d;
}

int dijkstra(vector<vector<int> > &graph, int source, int dest) {
    int n = graph.size();
    vector<int> dist(n, -1);
    priority_queue<HeapNode> pq;
    pq.push(HeapNode(source, 0, -1));
        dist[source] = 0;
    while (!pq.empty()) {
        HeapNode node = pq.top();
        pq.pop();
        int v = node.v;
        int d = node.d;
        int prev = node.prev;
        if (v == dest) {
            return d;
        }
        for (int i = 0; i < graph[v].size(); i++) {
            int w = graph[v][i];
            if (dist[w] < 0 || dist[w] > d + graph[v][i]) {
                dist[w] = d + graph[v][i];
                pq.push(HeapNode(w, dist[w], v));
            }
        }
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<vector<int> > graph(n, vector<int>());
        for (int i = 0; i < n - 1; i++) {
            int u, v, w;
            w=1;
            cin >> u >> v;
            graph[u - 1].push_back(v - 1);
            graph[v - 1].push_back(u - 1);
        }
        for (int i = 0; i < q; i++) {
            int k, d;
            cin >> k >> d;
            int ans = dijkstra(graph, 0, k - 1);
            cout << ans << endl;
        }
    }
    return 0;
}



<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
typedef pair<int, int> iPair;
void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt){
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

unordered_map<int, int> shortestPath(vector<pair<int,int>> adj[], int V, int src){
	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
	unordered_map<int, int> dist;
    for(int i = 0; i < V; i++)
        dist[i] = INF;
	pq.push(make_pair(0, src));
	dist[src] = 0;
	while (!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		for (auto x : adj[u])
		{
			int v = x.first;
			if (dist[v] > dist[u] + 1)
			{
				dist[v] = dist[u] + 1;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
    return dist;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<iPair> adj[n];
        for(int i = 0; i < n-1; i++){
            int x, y;
            cin >> x >> y;
            addEdge(adj, x-1, y-1, 1);
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            unordered_map<int,int> a = shortestPath(adj, n, x-1);
            unordered_map<int,int > b = shortestPath(adj, n, y-1);
            int sum = 0;
            for(int k = 0;k < n; k++){
                sum += min(a[k], b[k]);
            }
            cout << sum << endl;
        }
    }
	return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
typedef pair<int, int> iPair;
void addEdge(vector <pair<int, int> > adj[], int u, int v, int wt){
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

unordered_map<int, int> shortestPath(vector<pair<int,int>> adj[], int V, int src){
	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
	unordered_map<int, int> dist;
    for(int i = 0; i < V; i++)
        dist[i] = INF;
	pq.push(make_pair(0, src));
	dist[src] = 0;
	while (!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		for (auto x : adj[u])
		{
			int v = x.first;
			if (dist[v] > dist[u] + 1)
			{
				dist[v] = dist[u] + 1;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
    return dist;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<iPair> adj[n];
        for(int i = 0; i < n-1; i++){
            int x, y;
            cin >> x >> y;
            addEdge(adj, x-1, y-1, 1);
        }
        for(int i = 0; i < m; i++){
            int x, y;
            cin >> x >> y;
            unordered_map<int,int> a = shortestPath(adj, n, x-1);
            unordered_map<int,int > b = shortestPath(adj, n, y-1);
            int sum = 0;
            for(int k = 0;k < n; k++){
                sum += min(a[k], b[k]);
            }
            cout << sum << endl;
        }
    }
	return 0;
}
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

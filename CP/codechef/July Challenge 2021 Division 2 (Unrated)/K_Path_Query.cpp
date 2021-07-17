// You're given a tree with N vertices numbered from 1 to N. Your goal is to handle Q queries. For each query you are given K nodes v1,v2,…,vK. Find if there exists a simple path in the tree covering all the given vertices.

// Input
// The first line contains a single integer T - the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single integer N.
// Each of the following N−1 lines contains two integers u and v denoting an edge between nodes u and v.
// The next line contains a single integer Q - the number of queries.
// The next Q lines describe queries. The i-th line describes the i-th query and starts with the integer Ki — the number of vertices in the current query. Then Ki integers follow: v1,v2,…,vKi.
// Output
// For each query print "YES" (without quotes) if there exists a simple path in the tree covering all the given nodes, otherwise print "NO" (without quotes).

// You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

// Sample Input
// 1
// 6
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 2
// 3 6 2 4
// 4 2 3 4 5
// Sample Output
// YES
// NO

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, Q;
        cin >> N;
        vector<int> adj[N];
        for (int i = 0; i < N - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        }
        cin >> Q;
        for (int i = 0; i < Q; i++)
        {
            int K;
            cin >> K;
            vector<int> v(K);
            for (int j = 0; j < K; j++)
                cin >> v[j];
            bool flag = true;
            for (int j = 0; j < K; j++)
            {
                queue<int> q;
                q.push(v[j]);
                while (!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    for (int k = 0; k < adj[u].size(); k++)
                    {
                        if (adj[u][k] == v[j])
                        {
                            flag = false;
                            break;
                        }
                        else
                            q.push(adj[u][k]);
                    }
                    if (!flag)
                        break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}

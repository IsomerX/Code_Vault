#include <bits/stdc++.h>

using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

void solve()
{
    int n, m;
    cin >> n >> m;
    int cnt[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        cnt[u]++;
        cnt[v]++;
    }
    map<int, int> cnts;
    for (int i = 1; i <= n; i++)
    {
        cnts[cnt[i]]++;
    }
    vector<int> v;
    for (auto p : cnts)
    {
        v.push_back(p.second);
    }
    sort(v.begin(), v.end());
    if (v.size() == 3)
    {
        cout << v[1] << ' ' << v[2] / v[1] << '\n';
    }
    else
    {
        cout << v[0] - 1 << ' ' << v[1] / (v[0] - 1) << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}
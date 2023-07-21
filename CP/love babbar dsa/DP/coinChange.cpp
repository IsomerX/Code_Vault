#include <bits/stdc++.h>

using namespace std;

int cnt(vector<int> a, int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    if (m <= 0)
    {
        return 0;
    }
    return cnt(a, m - 1, n) + cnt(a, m, n - a[m - 1]);
}

int cnt2(vector<int> a, int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n + 1, 0));
    for (int i = 0; i < m; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i - 1][j] + (i - 1)>=0 ? dp[i][j - a[i - 1]] : 0;
        }
    }
    cout << dp[m - 1][n];
    return dp[m-1][n];
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    cout << cnt2(a, m, n) << endl;
    return 0;
}
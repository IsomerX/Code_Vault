#include <bits/stdc++.h>

using namespace std;

int memo[100][100];

bool recur(vector<int> a, int n, int target, int index)
{
    if (target == 0)
    {
        return true;
    }
    if (index >= n)
    {
        return false;
    }
    if (a[index] > target)
    {
        return recur(a, n, target, index + 1);
    }
    return recur(a, n, target, index + 1) || recur(a, n, target - a[index], index + 1);
}

bool memos(vector<int> a, int n, int target, int index)
{
    if (target == 0)
    {
        return true;
    }
    if (index >= n)
    {
        return false;
    }
    if (memo[target][index] != -1)
    {
        return memo[target][index];
    }
    if (a[index] > target)
    {
        memo[target][index] = recur(a, n, target, index + 1);
        return memo[target][index];
    }
    memo[target][index] = recur(a, n, target, index + 1) || recur(a, n, target - a[index], index + 1);
    return memo[target][index];
}

bool topdown(vector<int> a, int n, int target)
{
    int dp[100][100];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i][0] = true;
    }
    for (int i = 0; i < target + 1; i++)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < target + 1; j++)
        {
            if (j - a[i-1] < 0)
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j] || dp[i-1][j - a[i-1]];
            }
        }
    }
    return dp[n][target];
}

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << recur(a, n, target, 0) << endl;
    cout << memos(a, n, target, 0) << endl;
    cout << topdown(a, n, target) << endl;
}
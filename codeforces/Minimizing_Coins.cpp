#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dp[1000001] = {0};

ll ans(vector<int> &coins, int idx, int target)
{
    for (int i = 0; i <= target; i++)
        dp[i] = INT_MAX;
    dp[0] = 0;
    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; j < coins.size(); j++)
        {
            if (i - coins[j] >= 0)
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
        }
    }

    return dp[target];
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    ll w = ans(coins, n - 1, x);
    if (w == INT_MAX)
        cout << -1 << endl;
    else
        cout << w << endl;
    return 0;
}
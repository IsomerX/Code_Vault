#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dp[2000000] = {0};
ll mod = 1e9 + 7;

ll ans(vector<int> &coins, int idx, int target)
{
    dp[0] = 1;
    for (int j = 0; j < coins.size(); j++)
    {
        for (int i = 0; i <= target; i++)
        {
            if (i + coins[j] <= target)
                dp[i + coins[j]] = (dp[i] + dp[i + coins[j]]);
            dp[i + coins[j]] = dp[i + coins[j]] > mod ? dp[i + coins[j]] - mod : dp[i + coins[j]];
        }
    }

    return dp[target] % mod;
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    ll w = ans(coins, n - 1, x);
    cout << w << endl;
    return 0;
}
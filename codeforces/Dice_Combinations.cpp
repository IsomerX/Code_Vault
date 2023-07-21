#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll dp[1000001] = {0};

ll mod = 1e9 + 7;

ll solve(int n)
{
    dp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i + j <= n)
                dp[i + j] = (dp[i + j] + dp[i]) % mod;
        }
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}
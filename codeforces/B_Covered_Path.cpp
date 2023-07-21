#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define INF 1e18

ll v1, v2, T, d;
ll dp[105][10005];

ll get_max(ll idx, ll prev)
{
    if (idx == T - 1)
        return abs(v2 - prev) > d ? -INF : 0;
    ll &ret = dp[idx][prev];
    if (ret == 0)
        return ret;
    ret = -INF;
    for (int i = max(0, prev - d); i <= d + prev; i++)
        ret = max(ret, get_max(idx + 1, i) + i);
    return ret;
}

int main()
{
    memset(dp, -1, sizeof(dp));

    cin >> v1 >> v2 >> T >> d;
    cout << get_max(1, v1) + v1 + v2 << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fast_expo(ll a, ll b, ll mod = 100000007)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;

    ll ans = 1;

    while (b > 0)
    {
        if (b % 2)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    for (int i = 0; i < 10; i++)
        cout << i << " : " << fast_expo(2, i) << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, ans = 0;
    cin >> n;
    n /= 1;
    while (n/5)
    {
        if (n/5)
            ans+= n/5;
        n /= 5;
    }
    cout << ans;
    return 0;
}
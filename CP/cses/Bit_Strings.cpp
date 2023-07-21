<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int power(long long x, unsigned int y, int p)
{
    int res = 1;

    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << power(2, n, 1000000007) << '\n';
    return 0;
=======
#include <bits/stdc++.h>

using namespace std;

int power(long long x, unsigned int y, int p)
{
    int res = 1;

    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << power(2, n, 1000000007) << '\n';
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
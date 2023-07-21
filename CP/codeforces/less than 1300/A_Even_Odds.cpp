<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long a;
    if (n & 1)
    {
        a = n / 2;
        a++;
    }
    else
        a = n / 2;

    if (k <= a)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << (k - a) * 2;
    }
    return 0;
=======
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long a;
    if (n & 1)
    {
        a = n / 2;
        a++;
    }
    else
        a = n / 2;

    if (k <= a)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << (k - a) * 2;
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
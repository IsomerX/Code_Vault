<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
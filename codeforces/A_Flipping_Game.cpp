#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int c1 = 0;
    int c0 = 0;
    int mx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            c1++;
            if (c0 > 0)
            {
                c0--;
            }
        }
        else
        {
            c0++;
            if (c0 > mx)
            {
                mx = c0;
            }
        }
    }
    cout << c1 + mx;
    return 0;
}

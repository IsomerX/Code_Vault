<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int f(0), z(0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5)
            f++;
        else
            z++;
    }

    int ansf = f / 9;
    if(z == 0)
        cout << -1;
    else if (ansf == 0)
        cout << 0;
    else
    {

        for (int i = 0; i < ansf * 9; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < z; i++)
            cout << 0;
    }
    return 0;
=======
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int f(0), z(0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5)
            f++;
        else
            z++;
    }

    int ansf = f / 9;
    if(z == 0)
        cout << -1;
    else if (ansf == 0)
        cout << 0;
    else
    {

        for (int i = 0; i < ansf * 9; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < z; i++)
            cout << 0;
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
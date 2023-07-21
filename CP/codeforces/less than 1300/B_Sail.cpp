<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, x, y, negy = 0, negx = 0, posy = 0, posx = 0;

    cin >> n >> a >> b >> x >> y;
    string s;
    for (auto i : s)
    {
        if (i == 'N')
        {
            posy++;
        }
        else if (i == 'S')
        {
            negy++;
        }
        else if (i == 'E')
        {
            posx++;
        }
        else if (i == 'W')
        {
            negx++;
        }
    }

    int dx = x - a;
    int dy = y - b;
    if (dx >= negx && dx <= posx)
    {
        if (dy >= negy && dy <= posy)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
return 0;
=======
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, x, y, negy = 0, negx = 0, posy = 0, posx = 0;

    cin >> n >> a >> b >> x >> y;
    string s;
    for (auto i : s)
    {
        if (i == 'N')
        {
            posy++;
        }
        else if (i == 'S')
        {
            negy++;
        }
        else if (i == 'E')
        {
            posx++;
        }
        else if (i == 'W')
        {
            negx++;
        }
    }

    int dx = x - a;
    int dy = y - b;
    if (dx >= negx && dx <= posx)
    {
        if (dy >= negy && dy <= posy)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
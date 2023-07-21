<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3][3] = {0};
    bool b[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < a[i][j]; k++)
            {
                b[i][j] = !b[i][j];
                if (i != 2)
                    b[i + 1][j] = !b[i + 1][j];
                if (j != 2)
                    b[i][j + 1] = !b[i][j + 1];
                if (i != 0)
                    b[i - 1][j] = !b[i - 1][j];
                if (j != 0)
                    b[i][j - 1] = !b[i][j - 1];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << b[i][j];
        cout << endl;
    }
    return 0;
=======
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3][3] = {0};
    bool b[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < a[i][j]; k++)
            {
                b[i][j] = !b[i][j];
                if (i != 2)
                    b[i + 1][j] = !b[i + 1][j];
                if (j != 2)
                    b[i][j + 1] = !b[i][j + 1];
                if (i != 0)
                    b[i - 1][j] = !b[i - 1][j];
                if (j != 0)
                    b[i][j - 1] = !b[i][j - 1];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << b[i][j];
        cout << endl;
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
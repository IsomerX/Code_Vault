<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;
int cnt = 0;
const int rrrr = 100;
bool check(vector<vector<bool>> b)
{
    for (int i = 0; i < 5; i++)
    {
        bool r = 1;
        for (int j = 0; j < 5; j++)
        {
            if (b[i][j] == 0)
            {
                r = 0;
            }
        }
        if (r == 1)
        {
            return 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        bool r = 1;
        for (int j = 0; j < 5; j++)
        {
            if (b[j][i] == 0)
            {
                r = 0;
            }
        }
        if (r == 1)
        {
            return 1;
        }
    }

    // bool d1 = 1, d2 = 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (b[i][i] == 0)
    //     {
    //         d1 = 0;
    //     }
    //     if (b[i][4 - i] == 0)
    //         d2 = 0;
    // }

    // if (d1 || d2){
    //         cout << "row" << endl;
    //     return 1;}
    return 0;
}

int main()
{
    vector<vector<vector<int>>> a;
    vector<vector<vector<bool>>> b;
    // vector<vector<vector<bool>>>b(vector<vector<bool>(vector<bool>(0, 5), 5), 100);
    vector<int> lis{17, 11, 37, 7, 89, 48, 99, 28, 56, 55, 57, 27, 83, 59, 53, 72, 6, 87, 33, 82, 13, 23, 35, 40, 71, 47, 78, 2, 39, 4, 51, 1, 67, 31, 79, 69, 15, 73, 80, 22, 92, 95, 91, 43, 26, 97, 36, 34, 12, 96, 86, 52, 66, 94, 61, 76, 64, 77, 85, 98, 42, 68, 84, 63, 60, 30, 65, 19, 54, 58, 24, 20, 25, 75, 93, 16, 18, 44, 14, 88, 45, 10, 9, 3, 70, 74, 81, 90, 46, 38, 21, 49, 29, 50, 0, 5, 8, 32, 62, 41};

    for (int i = 0; i < rrrr; i++)
    {
        vector<vector<int>> temp;
        vector<vector<bool>> t2;
        for (int j = 0; j < 5; j++)
        {
            vector<int> t;
            vector<bool> tt;
            for (int k = 0; k < 5; k++)
            {
                int x;
                cin >> x;
                t.push_back(x);
                tt.push_back(0);
            }
            temp.push_back(t);
            t2.push_back(tt);
        }
        a.push_back(temp);
        b.push_back(t2);
    }

    vector<bool> done(rrrr, 0);

    for (int o = 0; o < lis.size(); o++)
    {
        for (int i = 0; i < rrrr; i++)
        {
            if (done[i] == 1)
                continue;
            for (int j = 0; j < 5; j++)
            {
                for (int k = 0; k < 5; k++)
                {
                    if (a[i][j][k] == lis[o])
                        b[i][j][k] = 1;
                }
            }
            if (check(b[i]))
            {
                done[i] = 1;
                cnt++;
                if (cnt == rrrr)
                {
                    int sum = 0;
                    for (int q = 0; q < 5; q++)
                    {
                        for (int w = 0; w < 5; w++)
                        {
                            if (!b[i][q][w])
                            {
                                sum += a[i][q][w];
                            }
                        }
                    }
                    cout << sum << " " << lis[o] << endl;
                    cout << sum * lis[o] << endl;
                    // cout << "awesome" << endl;
                    // return 0;
                }
            }
        }
    }

    return 0;
=======
#include <bits/stdc++.h>

using namespace std;
int cnt = 0;
const int rrrr = 100;
bool check(vector<vector<bool>> b)
{
    for (int i = 0; i < 5; i++)
    {
        bool r = 1;
        for (int j = 0; j < 5; j++)
        {
            if (b[i][j] == 0)
            {
                r = 0;
            }
        }
        if (r == 1)
        {
            return 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        bool r = 1;
        for (int j = 0; j < 5; j++)
        {
            if (b[j][i] == 0)
            {
                r = 0;
            }
        }
        if (r == 1)
        {
            return 1;
        }
    }

    // bool d1 = 1, d2 = 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (b[i][i] == 0)
    //     {
    //         d1 = 0;
    //     }
    //     if (b[i][4 - i] == 0)
    //         d2 = 0;
    // }

    // if (d1 || d2){
    //         cout << "row" << endl;
    //     return 1;}
    return 0;
}

int main()
{
    vector<vector<vector<int>>> a;
    vector<vector<vector<bool>>> b;
    // vector<vector<vector<bool>>>b(vector<vector<bool>(vector<bool>(0, 5), 5), 100);
    vector<int> lis{17, 11, 37, 7, 89, 48, 99, 28, 56, 55, 57, 27, 83, 59, 53, 72, 6, 87, 33, 82, 13, 23, 35, 40, 71, 47, 78, 2, 39, 4, 51, 1, 67, 31, 79, 69, 15, 73, 80, 22, 92, 95, 91, 43, 26, 97, 36, 34, 12, 96, 86, 52, 66, 94, 61, 76, 64, 77, 85, 98, 42, 68, 84, 63, 60, 30, 65, 19, 54, 58, 24, 20, 25, 75, 93, 16, 18, 44, 14, 88, 45, 10, 9, 3, 70, 74, 81, 90, 46, 38, 21, 49, 29, 50, 0, 5, 8, 32, 62, 41};

    for (int i = 0; i < rrrr; i++)
    {
        vector<vector<int>> temp;
        vector<vector<bool>> t2;
        for (int j = 0; j < 5; j++)
        {
            vector<int> t;
            vector<bool> tt;
            for (int k = 0; k < 5; k++)
            {
                int x;
                cin >> x;
                t.push_back(x);
                tt.push_back(0);
            }
            temp.push_back(t);
            t2.push_back(tt);
        }
        a.push_back(temp);
        b.push_back(t2);
    }

    vector<bool> done(rrrr, 0);

    for (int o = 0; o < lis.size(); o++)
    {
        for (int i = 0; i < rrrr; i++)
        {
            if (done[i] == 1)
                continue;
            for (int j = 0; j < 5; j++)
            {
                for (int k = 0; k < 5; k++)
                {
                    if (a[i][j][k] == lis[o])
                        b[i][j][k] = 1;
                }
            }
            if (check(b[i]))
            {
                done[i] = 1;
                cnt++;
                if (cnt == rrrr)
                {
                    int sum = 0;
                    for (int q = 0; q < 5; q++)
                    {
                        for (int w = 0; w < 5; w++)
                        {
                            if (!b[i][q][w])
                            {
                                sum += a[i][q][w];
                            }
                        }
                    }
                    cout << sum << " " << lis[o] << endl;
                    cout << sum * lis[o] << endl;
                    // cout << "awesome" << endl;
                    // return 0;
                }
            }
        }
    }

    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
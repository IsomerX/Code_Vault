#include <iostream>
#include <vector>

using namespace std;

long long a[100000] = {0};

void display(const vector<vector<int>> &a)
{
    for (auto i : a)
    {
        for (auto j : i)
            cout << j << "\t";
        cout << endl;
    }
    // system("cls");
}

void make_fibonacci(int n)
{
    a[0] = 1, a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
}

void make_spiral(vector<vector<int>> &spiral)
{
    int t = 0, b = spiral.size() - 1;
    int l = 0, r = spiral.size() - 1;

    int cnt = 0;

    while (1)
    {
        if (l > r)
        {
            break;
        }
        for (int i = l; i <= r; i++)
        {
            spiral[t][i] = a[cnt];
            cnt++;
        }
        t++;

        if (t > b)
        {
            break;
        }
        for (int i = t; i <= b; i++)
        {
            spiral[i][r] = a[cnt];
            cnt++;
        }
        r--;
        if (l > r)
        {
            break;
        }
        for (int i = r; i >= l; i--)
        {
            spiral[b][i] = a[cnt];
            cnt++;
        }
        b--;
        if (t > b)
        {
            break;
        }
        for (int i = b; i >= t; i--)
        {
            spiral[i][l] = a[cnt];
            cnt++;
        }
        l++;
    }
    display(spiral);
}

int main()
{
    int n;
    cout << "enter the length of side of the spiral" << endl;
    cin >> n;
    vector<vector<int>> spiral(n, vector<int>(n, 0));
    make_fibonacci(n * n);
    make_spiral(spiral);
    return 0;
}
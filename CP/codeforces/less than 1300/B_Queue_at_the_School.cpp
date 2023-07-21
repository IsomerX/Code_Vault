#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string a;
    cin >> a;
    vector<bool> r(n, false);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'B')
            r[i] = true;
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (r[j] == 1 && r[j + 1] == 0)
            {
                r[j + 1] = 1;
                r[j] = 0;
                j++;
            }
        }
    }
        string ans = "";
        for (auto i : r)
        {
            if (i == 1)
                ans += "B";
            else
                ans += "G";
        }
        cout << ans << endl;

    return 0;
}
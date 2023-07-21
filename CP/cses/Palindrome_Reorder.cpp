#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    unordered_map<char, int> m;
    set<char> b;
    for (auto i : a)
    {
        m[i]++;
        b.insert(i);
    }

    string ans = "";

    int fal = 0;

    for (auto i : b)
    {
        if (m[i] % 2 == 1)
        {
            fal++;
            if (false > 1)
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    char adder;

    for (auto i : b)
    {
        if (m[i] % 2 == 0)
        {
            for (int j = 0; j < m[i] / 2; j++)
            {
                ans += i;
            }
        }
        else
        {
            adder = i;
        }
    }

    string reversed = ans;
    reverse(reversed.begin(), reversed.end());
    if(fal)
        ans += adder;
    ans += reversed;
    cout << ans;

    return 0;
}
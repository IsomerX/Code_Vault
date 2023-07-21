#include <bits/stdc++.h>

using namespace std;

bool isValid(long long n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum == 10;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for (long long i = 0; i < 11111111; i++)
    {
        if (isValid(i))
        {
            a.push_back(i);
        }
    }
    cout << a[n - 1] << endl;
}

int main()
{
    solve();
    return 0;
}
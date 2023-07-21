<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

#define ll long long

unordered_map<ll, ll> m;

ll catalan(int n)
{
    if (n == 0)
        return 1;
    if (m.find(n) != m.end())
        return m[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += catalan(i) * catalan(n - i - 1);
    }
    if (m.find(n) == m.end())
        m[n] = sum;
    return sum;
}

int main()
{
    int n;
    // cin >> n;
    for(int i = 0; i < 100; i++)
        cout << i << "\t : \t" <<  catalan(i) << endl;
    return 0;
=======
#include <bits/stdc++.h>

using namespace std;

#define ll long long

unordered_map<ll, ll> m;

ll catalan(int n)
{
    if (n == 0)
        return 1;
    if (m.find(n) != m.end())
        return m[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += catalan(i) * catalan(n - i - 1);
    }
    if (m.find(n) == m.end())
        m[n] = sum;
    return sum;
}

int main()
{
    int n;
    // cin >> n;
    for(int i = 0; i < 100; i++)
        cout << i << "\t : \t" <<  catalan(i) << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
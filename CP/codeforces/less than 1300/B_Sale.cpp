<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] > 0)
            break;
        ans += a[i];
    }
    cout << -ans;
    return 0;
=======
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[i] > 0)
            break;
        ans += a[i];
    }
    cout << -ans;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
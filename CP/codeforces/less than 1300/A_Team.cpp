<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
    unordered_map<int, int> m;
        for(int j = 0; j <3; j++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        if(m[1] >= 2)
            ans++;
    }
    cout << ans;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
    unordered_map<int, int> m;
        for(int j = 0; j <3; j++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        if(m[1] >= 2)
            ans++;
    }
    cout << ans;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
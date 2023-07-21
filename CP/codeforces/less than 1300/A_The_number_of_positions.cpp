<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n, a, b;
    int ans = 0;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if(i <= b && n-i-1 >= a)
            ans++;
    }
    cout << ans << endl;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n, a, b;
    int ans = 0;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if(i <= b && n-i-1 >= a)
            ans++;
    }
    cout << ans << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
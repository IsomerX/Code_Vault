<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n, a, b, ans = 0, current = 0;
    cin >> n;
    for(int  i= 0; i< n; i++)
    {
        cin >> a >> b;
        current -=a;
        current +=b;
        ans = max(ans, current);
    }
    cout << ans << endl;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n, a, b, ans = 0, current = 0;
    cin >> n;
    for(int  i= 0; i< n; i++)
    {
        cin >> a >> b;
        current -=a;
        current +=b;
        ans = max(ans, current);
    }
    cout << ans << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
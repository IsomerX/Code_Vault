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
}
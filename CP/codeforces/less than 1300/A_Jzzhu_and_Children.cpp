// wrong lol 

#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n, m, greatest = -1, ans = -1,prev=0;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(greatest < ceil(a[i]/m))
        {
            greatest = ceil(a[i]/m);
            ans = i;
        }
    }
    cout << ans+1 << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, left, right, l = 0, r = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> left >> right;
        if (left == 0)
            l++;
        if (right == 0)
            r++;
    }
    int ans =0;
    if(l>t/2){
        ans+= t - l ;
    }
    else{
        ans += l;
    }

    if(r>t/2){
        ans+= t - r ;
    }
    else{
        ans += r;
    }
    cout << ans << endl;
        return 0;
}
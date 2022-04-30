#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    string a;
    cin >> a;
    int n = a.size();
    string ans = "";
    for(int i = 0; i < n; i++){
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B'){
            ans += " ";
            i += 2;
        }
        else{
            ans += a[i];
        }
    }
    string ans2 = "";
    for(int i = 0; i < ans.size(); i++){
        if(ans[i] == ' ' && ans[i+1] == ' '){
            continue;
        }
        else{
            ans2 += ans[i];
        }
    }
    cout << ans2;
    return 0;
}
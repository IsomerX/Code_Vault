#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 0;i < n; i++){
        cin >> a[i];
    }
    a[n] = a[0];
    int mins = INT_MAX;
    pair<int, int> ans;

    for(int i = 1; i <= n; i++) {
        if(abs(a[i] - a[i-1]) < mins){
            mins = abs(a[i] - a[i-1]);
            ans.first = i;
            ans.second = i-1;
        }
    }
    if(ans.first == n){
        ans.first = 0;
    }

    cout << ans.first + 1 << " " << ans.second + 1;
    return 0;
}
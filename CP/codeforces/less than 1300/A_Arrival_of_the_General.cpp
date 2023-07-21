#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int ma = INT_MIN, mi = INT_MAX;
    int ma_pos = -1, mi_pos = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > ma){
            ma = a[i];
            ma_pos = i;
        }
        if(a[i] <= mi){
            mi = a[i];
            mi_pos = i;
        }
    }

    int ans = ma_pos - 0 + n - mi_pos - 1;
    if(mi_pos < ma_pos)
        ans--;
    cout << ans << endl;
    return 0;
}
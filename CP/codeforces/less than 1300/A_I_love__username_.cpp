#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    int min, max, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(i == 0){
            min = max = x;
        }
        else{
            if(x < min){
                min = x;
                ans++;
            }
            if(x > max){
                max = x;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
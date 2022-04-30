#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n&1==1)
        cout << -1;
    else{
        vector<int> v(n);
        for(int i=0;i<n;i++)
            v[i] = i+1;
        for(int i = 0; i < n-1; i++){
            int temp = v[i];
            v[i] = v[i+1];
            v[i+1] = temp;
            i++;
        }
        // 2 1 4 3 6 5 
        // 1 2 3 4 5 6
        for(auto i : v)
            cout << i << " ";
    }
    return 0;
}
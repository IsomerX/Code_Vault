#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        int ans =0;
        cin >> a >> b;
        for(int i = 0; i < a.length(); i++){
            for(int j = 0; j < b.length(); j++){
                if(a[i] == b[j]){
                    int k = i;
                    int temp = 0;
                    int p = j;
                    while(a[k] == b[p] && k < a.length() && p < b.length()){
                        temp+=1;
                        k++;
                        p++;
                    }
                    ans = max(ans, temp);
                }
            }
        }
        cout << a.length() + b.length() - 2*ans << endl;
    }
    return 0;
}
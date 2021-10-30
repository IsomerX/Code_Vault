#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int t;
    cin >> t;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < t - 1; i++){
        if(s[i] == s[i+1])
            ans++;
    }
    cout << ans << endl;
}
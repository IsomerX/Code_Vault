<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
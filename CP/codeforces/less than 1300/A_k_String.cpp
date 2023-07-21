#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    unordered_map<char, int> m;
    set<char> s1;
    for(char i : s){
        m[i]++;
        s1.insert(i);
    }
    
    for(char i : s1){
        if(m[i] % n != 0){
            cout << -1;
            return 0;
        }
    }

    string ans = "";

    for(char i : s1){
        for(int j = 0; j < m[i] / n; j++){
            ans += i;
        }
    }

    string ans1 = "";

    for(int i = 0; i < n; i++){
        ans1 += ans;
    }

    cout << ans1;

    return 0;
}
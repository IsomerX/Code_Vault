#include<bits/stdc++.h>
using namespace std;

bool valid(string t, int n){
    string a = t;
    for(int i = 0; i < a.length();i++){
        if(a[i] == 'x'){
            bool flag = 0;
            for(int k = i+1; k <= min((int)a.length()-1, i+n); k++){
                if(a[k] == 'x'){
                    a[k] = '.';
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                return 0;
        }
    }
    return 1;
}

int main(int argc,char **argv){
    int t;
    cin >> t;
    // cout << valid(".xx.*xx", 3) << endl;
    while(t--){
        int m, n;   
        cin >> m >> n;
        string s;
        cin >> s;
        int ans = 0;
        for(auto i = 0; i < s.length(); i++){
            if(s[i] == '*'){
                s[i] = 'x';
                ans+=1;
                break;
            }
        }
        for(int i = s.length()-1; i>=0; i--){
            if(s[i] == '*'){
                s[i] = 'x';
                ans+=1;
                break;
            }     
        }
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'x'){
                bool f = 0;
                for(int k = min(i+1,(int)s.length()-1); k <= min(i+n, (int)s.length()-1);k++){
                    if(s[k] == 'x'){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    int j = i+n;
                    if(j > s.length())
                        j = s.length()-1;
                    while(j!=i && j < s.length()){
                        if(s[j]=='*'){
                            ans+=1;
                            s[j] = 'x';
                            break;
                        }
                        j-=1;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// install gcc
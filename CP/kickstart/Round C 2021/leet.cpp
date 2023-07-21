<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;
void print(int n){
if(n == 2){
    cout << 1 << endl;
}
 vector<vector<int>> a; 
    for(int i = 0; i <= n; i++){
        vector<int> temp;
        for(int j = 0; j <= n; j++){
            if(j == i)
                temp.push_back(i);
            else
                temp.push_back(0);
        }
        a.push_back(temp);
    }
    int ans = 0;
    for(int i = 1; i <= n;i++){
        a[i][1] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 0)
                a[i][j] = a[i-1][j];
            if(j+i <= n){
                a[i][i+j] = max(a[i-1][i+j], a[i][j]*i);
                ans = max(ans, a[i][i+j]);
            }
        }
    }
    cout << ans << endl;
}
int main(){
    int n;
    while(1){
        cin >> n;
        print(n);
    }
    
    return 0;
=======
#include<bits/stdc++.h>

using namespace std;
void print(int n){
if(n == 2){
    cout << 1 << endl;
}
 vector<vector<int>> a; 
    for(int i = 0; i <= n; i++){
        vector<int> temp;
        for(int j = 0; j <= n; j++){
            if(j == i)
                temp.push_back(i);
            else
                temp.push_back(0);
        }
        a.push_back(temp);
    }
    int ans = 0;
    for(int i = 1; i <= n;i++){
        a[i][1] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 0)
                a[i][j] = a[i-1][j];
            if(j+i <= n){
                a[i][i+j] = max(a[i-1][i+j], a[i][j]*i);
                ans = max(ans, a[i][i+j]);
            }
        }
    }
    cout << ans << endl;
}
int main(){
    int n;
    while(1){
        cin >> n;
        print(n);
    }
    
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
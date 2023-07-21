<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<string> a;
    unordered_map<string, int> b;
    for(int i = 0; i < n; i++){
        string te;
        cin >> te;
        b[te]++;
        a.insert(te);
    }
    pair<int, string> ma{-1, "f"};
    for(auto i : a){
        if(b[i] > ma.first){
            ma.first = b[i];
            ma.second = i;
        }
    }
    cout << ma.second;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<string> a;
    unordered_map<string, int> b;
    for(int i = 0; i < n; i++){
        string te;
        cin >> te;
        b[te]++;
        a.insert(te);
    }
    pair<int, string> ma{-1, "f"};
    for(auto i : a){
        if(b[i] > ma.first){
            ma.first = b[i];
            ma.second = i;
        }
    }
    cout << ma.second;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
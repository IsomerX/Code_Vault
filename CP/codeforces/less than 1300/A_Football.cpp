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
}
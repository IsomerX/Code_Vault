#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        priority_queue<pair<int,int>> a;
        map<int, int> b;
        for(int i = 0; i < n; i++){
            int l;
            cin >> l;
            b[l]++;
        }

        for(auto i : b){
            a.push({i.second,i.first});
        }
        while(a.size() >=2){
            auto i = a.top();
            a.pop();
            auto j = a.top();
            a.pop();
            i.first-=1;
            j.first-=1;
            n-=2;
            if(i.first){
                a.push({i.first,i.second});
            }
            if(j.first){
                a.push({j.first,j.second});
            }
        }
        cout << n << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool combinationSum(vector<int>& a, int t) {
    if(t==0){
        cout << endl;
        return 1;
    }
    if(t < a[0])
        return 0;
    for(auto i:a){
        if(i<=t){
            if(combinationSum(a,t-i))
                cout << i << " ";
        }
    }
    return 1;
}

int main(){
    vector<int> a = {2,3,5};
    combinationSum(a, 1);
    return 0;
}
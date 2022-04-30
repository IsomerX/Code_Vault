#include <bits/stdc++.h>  
 
using namespace std;

string helper(string a){
    string ans = "";
    ans+=a[0];
    ans+= to_string(a.length()-2);
    ans+=a[a.size()-1];
    return ans;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a.size() <= 10){
            cout<<a<<endl;
        }
        else{
            cout<<helper(a)<<endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long ans=0;
        vector<long long> mod(n+1,1);
        for(long long i=2;i<=n;i++){
            long long a=m%i;
            ans+=mod[a];
            for(long long j=a;j<=n;j+=i){
                mod[j]++;
            }
        }
        cout<<ans<<endl;
     }
}




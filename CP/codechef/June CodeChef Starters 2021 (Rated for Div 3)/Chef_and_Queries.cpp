#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for (int i = a; i < b; i++)
typedef long long ll;
int main() {
     ios::sync_with_stdio(0);
     cin.tie(0);
	ll n,q;
	cin>>n>>q;
	ll a[n];
	loop(i,0,n){
	     cin>>a[i];
	}
	loop(i,0,q){
	     ll no,l,x,r,pos;
	     cin>>no;
	     if(no==1){
	          cin>>l>>r>>x;
	          ll g=x-l;
	          for (int j=l-1;j<r;j++){
	               a[j]+=((g+j+1)*(g+j+1));
	          }
	     }
	     else{
	          cin>>pos;
	          cout<<a[pos-1]<<endl;
	     }
	}
	return 0;
}

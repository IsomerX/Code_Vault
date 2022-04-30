#include<bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
using pii = pair<int, int>;

#define RALL(x) rbegin(x), rend(x)
#define eb emplace_back

const int maxn = 3e5 + 5;
const int mod = 1e9 + 7;

vector<int> adj[maxn], subval,val;
vector<pii> ch;

void dfs(int now, int lst = -1){
    for(auto x: adj[now]){
        if(x==lst)
            continue;
        dfs(x,now);
    }

    ch.clear();
    for(auto x : adj[now]){
        if(x!=lst)ch.eb(subval[x], x);
    }
    sort(RALL(ch));

    int tok = 1;
    for(auto [_val, id] : ch)
        val[id] = tok++;
    for(auto x:adj[now]){
        if(x!=lst) subval[now] += val[x] * subval[x];
    }
}
void solve(){
     int N,X; cin>>N>>X;
     subval.assign(N,1), val.assign(N,0);
     for(int i=0;i<N;++i) vector<int>().swap(adj[i]);
     for(int i=0;i<N-1;++i){
          int u,v; cin>>u>>v, --u,--v;
          adj[u].eb(v),adj[v].eb(u);
     }
     dfs(0);
     cout<<subval[0]%mod*X%mod<<endl;
}
int32_t main() {
	int t=1;cin>>t;
	for(int _=1;_<=t;_++){
	     solve();
	}
	return 0;
}

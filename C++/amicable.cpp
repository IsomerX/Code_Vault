#include<iostream>
#include<vector>
#include<map>

using namespace std;

#define ll long long int

map<ll,ll> a;

bool check(ll x){
    if ( a.find(x) == a.end() ) {
        return 1;
    } else {
        return 0;
    }
}

ll ami(int x){
    ll count = 0;
    // cout << "factors of " << x << ": ";
    for(int i = 1; i <x; i++)
        if(!(x%i))
            count+=i;
            // cout << i << ", ";
    // cout <<endl;
    return count;
}

int main(){
    ll sum = 0, n = 100;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i!=j){
                if(!a[i])
                    a.insert({i, ami(i)});
                if(!a[j])
                    a.insert({j,ami(j)});

                if(check(i) && check(j) && a[i] == a[j]){
                    sum += i + j;
                    // cout << a[i] << " " << a[j] << endl;
                }
                if(!check(i))
                    a.insert({i, ami(i)});
                if(!check(j))
                    a.insert({j,ami(j)});
            }
        }
    }
    cout << "ami" <<  ami(50) << endl;
    for(auto i : a){
        cout << i.first << " " << i.second << endl;
    }
    cout << sum << endl;
}
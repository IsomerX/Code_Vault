#include <bits/stdc++.h>  
 
using namespace std;

#define ll uint64_t

vector<vector<ll>> operator *(vector<vector<ll>> a, vector<vector<ll>> b){
    return {
        {a[0][0]*b[0][0] + a[0][1]*b[1][0], a[0][0]*b[0][1] + a[0][1]*b[1][1]},
        {a[1][0]*b[0][0] + a[1][1]*b[1][0], a[1][0]*b[0][1] + a[1][1]*b[1][1]},
    };
}

vector<vector<ll>> mat_power(vector<vector<ll>> a, ll pow){
    if(pow == 0)
        return {{1, 0}, {0, 1}};
    if(pow == 1)
        return a;

    vector<vector<ll>> res = {{1, 0}, {0, 1}};

    while(pow > 0) {
        if(pow&1){
            res = res * a;
        }
        a = a * a;
        pow >>= 1;
    }    

    return res;
}

void mat_fibonacci(ll n){
    vector<vector<ll>> ans = mat_power({{0, 1}, {1, 1}}, n);

    printf("Fn = %d, Fn+1 = %d", ans[1][0], ans[1][1]);
}

void norm_fibonacci(ll n){
    ll a{0}, b{1};

    for(ll i = 0; i <= n; i++){
        cout << a << " ";
        ll temp = b;
        b = a + b;
        a = temp;
    }
}

// fibonacci numbers only available till 46 in cpp rn

int main()
{
    // norm_fibonacci(21);
    // printf("\n");
    // mat_fibonacci(19);
    for(int i = 0; i < 50; i++){
        printf("%d : ", i);
        mat_fibonacci(i);
        printf("\n");
    }
    return 0;
}
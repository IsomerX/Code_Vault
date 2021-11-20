#include <bits/stdc++.h>  
 
using namespace std;

void linear_sieve(int n){
    vector<int> pr, lp(n+1);

    for(int i = 2; i <= n; i++){
        if(lp[i] == 0){
            lp[i] = i;
            pr.push_back(i);
        }

        for(int j = 0; j < pr.size() && pr[j] <= lp[i] && i*pr[j] <= n; ++j){
            lp[i*pr[j]] = pr[j];
        }
    }

    for(auto i : pr)
        cout << i << " ";

    cout << endl;

}

int main()
{
    linear_sieve(100);
    return 0;
}
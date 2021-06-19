#include<bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin >> a;
    vector<int> vc(a);
    for(int i = 0; i < a; i++){
    	cin >> vc[i];
    }

    for(auto i : vc)
    	cout << i << " ";
    cout << endl;

    reverse(vc.begin(),vc.end());

    for(auto i : vc)
    	cout << i << " ";
    cout << endl;


 
	return 0;
}
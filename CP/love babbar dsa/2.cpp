#include<bits/stdc++.h>

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a, big = -100, small = 10000, temp;
    cin >> a;
    for(int i = 0; i < a; i++){
    	cin >> temp;
    	if(temp < small)
    		small = temp;
    	if(big < temp)
    		big = temp;
    }
    cout << small << " " << big << endl;
 
	return 0;
}
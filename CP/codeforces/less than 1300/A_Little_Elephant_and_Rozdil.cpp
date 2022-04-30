#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    set<int> b;
    unordered_map<int, int> r;

    for(int i = 0; i<n; i++){
        int c;
        cin >> c;
        a.push_back(c);
        b.insert(c);
        r[c]++;
    }

    if(r[*b.begin()] > 1)
        cout << "Still Rozdil" << endl;
    else{
        auto it = find(a.begin(), a.end(), *b.begin());
        cout << it - a.begin() + 1 << endl;
    }
    return 0;
}
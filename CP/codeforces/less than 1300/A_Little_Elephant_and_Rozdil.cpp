<<<<<<< HEAD
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
=======
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
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    unordered_map<int, int> r;
    r[a] += 1;
    r[b] += 1;
    if(r[a] > 1)
        ans += 1;
    r[c] += 1;
    if(r[c] > 1)
        ans += 1;
    r[d] += 1;
    if(r[d] > 1)
        ans += 1;
    cout << ans << endl;
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    unordered_map<int, int> r;
    r[a] += 1;
    r[b] += 1;
    if(r[a] > 1)
        ans += 1;
    r[c] += 1;
    if(r[c] > 1)
        ans += 1;
    r[d] += 1;
    if(r[d] > 1)
        ans += 1;
    cout << ans << endl;
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
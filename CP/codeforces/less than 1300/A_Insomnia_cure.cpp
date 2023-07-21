<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int l, m, n, k, d;
    cin >> l >> m >> n >> k >> d;

    bool a[d] = {0};
    for(int i = l-1; i < d; i+=l)
        a[i] = 1;
    for(int i = m-1; i < d; i+=m)
        a[i] = 1;
    for(int i = n-1; i < d; i+=n)
        a[i] = 1;   
    for(int i = k-1; i < d; i+=k)
        a[i] = 1;
    int tot = 0;

    for(auto i:a)
        if(i)
            tot++;
    cout << tot << endl;

    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int l, m, n, k, d;
    cin >> l >> m >> n >> k >> d;

    bool a[d] = {0};
    for(int i = l-1; i < d; i+=l)
        a[i] = 1;
    for(int i = m-1; i < d; i+=m)
        a[i] = 1;
    for(int i = n-1; i < d; i+=n)
        a[i] = 1;   
    for(int i = k-1; i < d; i+=k)
        a[i] = 1;
    int tot = 0;

    for(auto i:a)
        if(i)
            tot++;
    cout << tot << endl;

    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
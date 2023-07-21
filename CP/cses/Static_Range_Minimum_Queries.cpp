<<<<<<< HEAD

#include <bits/stdc++.h>

using namespace std;

vector<long long> tree;

long long f(int current, int low, int hig, int range_low, int range_hig){
        if(low >= range_low && range_hig >= hig){
                return tree[current];
        }
        if(range_hig < low || range_low > hig)
                return INT_MAX;

        int mid = (low + hig) / 2;

        return min(f(2 * current, low, mid, range_low, range_hig),f(2 * current + 1, mid + 1, hig, range_low, range_hig));
}

int main()
{
        int n, q;
        cin >> n >> q;
        vector<long long> a;
        for (int i = 0; i < n; i++)
        {
                long long x;
                cin >> x;
                a.push_back(x);
        }

        while(__builtin_popcount(n) != 1){
                a.push_back(0);
                n++;
        }

        tree.resize(2 * n);

        for(int i = 0; i < n; i++){
                tree[n + i] = a[i];
        }
        for(int i = n - 1; i >= 0; i--){
                tree[i] = min(tree[2 * i], tree[2*i + 1]);
        }

        while(q--){
                int r, t;
                cin >> r >> t;
                r--;
                t--;
                cout << f(1, 0, n-1, r, t) << endl;
        }

        return 0;
=======

#include <bits/stdc++.h>

using namespace std;

vector<long long> tree;

long long f(int current, int low, int hig, int range_low, int range_hig){
        if(low >= range_low && range_hig >= hig){
                return tree[current];
        }
        if(range_hig < low || range_low > hig)
                return INT_MAX;

        int mid = (low + hig) / 2;

        return min(f(2 * current, low, mid, range_low, range_hig),f(2 * current + 1, mid + 1, hig, range_low, range_hig));
}

int main()
{
        int n, q;
        cin >> n >> q;
        vector<long long> a;
        for (int i = 0; i < n; i++)
        {
                long long x;
                cin >> x;
                a.push_back(x);
        }

        while(__builtin_popcount(n) != 1){
                a.push_back(0);
                n++;
        }

        tree.resize(2 * n);

        for(int i = 0; i < n; i++){
                tree[n + i] = a[i];
        }
        for(int i = n - 1; i >= 0; i--){
                tree[i] = min(tree[2 * i], tree[2*i + 1]);
        }

        while(q--){
                int r, t;
                cin >> r >> t;
                r--;
                t--;
                cout << f(1, 0, n-1, r, t) << endl;
        }

        return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
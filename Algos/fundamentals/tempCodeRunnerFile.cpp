<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

// ax + by = c (c == gcd(a, b))

tuple<int, int, int> extended(int a, int b){
    if(b == 0){
        return make_tuple(a, 1, 0);
    }

    tuple<int, int, int> temp = extended(b, a%b);

    tuple<int, int, int> ans = temp;
    get<1>(ans) = get<2>(temp);
    get<2>(ans) = get<1>(temp) - (a/b) * get<2>(temp)2;

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    tuple<int, int, int> a1; 
    a1 = extended(a, b);
    printf("%d %d %d", get<0>(a1), get<1>(a1), get<2>(a1));
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

// ax + by = c (c == gcd(a, b))

tuple<int, int, int> extended(int a, int b){
    if(b == 0){
        return make_tuple(a, 1, 0);
    }

    tuple<int, int, int> temp = extended(b, a%b);

    tuple<int, int, int> ans = temp;
    get<1>(ans) = get<2>(temp);
    get<2>(ans) = get<1>(temp) - (a/b) * get<2>(temp)2;

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    tuple<int, int, int> a1; 
    a1 = extended(a, b);
    printf("%d %d %d", get<0>(a1), get<1>(a1), get<2>(a1));
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
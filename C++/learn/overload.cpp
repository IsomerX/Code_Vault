#include <bits/stdc++.h>  

using namespace std;

// vector<int> operator+(const int& a, const int& b){
//     cout << 
// }

class vec{ 
public:
    int* a;
    vec(int x, int y){
        a = new int[2];
        a[0] = x;
        a[1] = y;
    }
    vec operator+(const vec& b){
        vec c(a[0] + b.a[0], a[1] + b.a[1]);
        return c;
    }
};
int main()
{
    vec o(2,3);
    vec c(3,3);
    vec d = o + c;
    cout << d.a[0] << " " << d.a[1] << endl;
    return 0;
}
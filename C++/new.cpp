#include <bits/stdc++.h>  
 
using namespace std;

void test(vector<int> a = {1, 1, 1}){
    char *r = new char('r');
    cout << *r << endl;
    for(char* i = r; i <= (r + 100); i++)
        cout << i << " : " << *i << '\n';
        // printf("%d : %d\n", i, *i);
}

int main()
{
    int a;
    // cin >> a;
    test();
    return 0;
}
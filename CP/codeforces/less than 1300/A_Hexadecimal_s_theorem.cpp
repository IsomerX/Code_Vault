#include <bits/stdc++.h>  
 
using namespace std;


void multiply(int F[2][2], int M[2][2]) {
   int a = F[0][0] * M[0][0] + F[0][1] * M[1][0];
   int b= F[0][0] * M[0][1] + F[0][1] * M[1][1];
   int c = F[1][0] * M[0][0] + F[1][1] * M[1][0];
   int d = F[1][0] * M[0][1] + F[1][1] * M[1][1];
   F[0][0] = a;
   F[0][1] = b;
   F[1][0] = c;
   F[1][1] = d;
}
void power(int F[2][2], int n) {
   if (n == 0 || n == 1)
      return;
   int M[2][2] = {{1,1},{1,0}};
   power(F, n / 2);
   multiply(F, F);
   if (n % 2 != 0)
      multiply(F, M);
}
int fibonacci_matrix(int n) {
   int F[2][2] = {{1,1},{1,0}};
   if (n == 0)
      return 0;
   power(F, n - 1);
   return F[0][0];
}

int main()
{
    long long n;
    cin >> n;

    if(n == 2){
        cout << "0 1 1";
        return 0;
    }

    if(n==1){
        cout << "0 0 1";
        return 0;
    }

    if(n == 0){
        cout << "0 0 0";
        return 0;
    }

    long long low = 0, high = 45;

    while(low < high){
        long long mid = (low+high)/2;
        long long guess = fibonacci_matrix(mid);
        if(guess >= n){
            high = mid;
        }
        else
            low = mid + 1;
    }


    int a = fibonacci_matrix(low - 1);
    int b = fibonacci_matrix(low - 3);
    int c = fibonacci_matrix(low - 4);
    cout << c << " " << b << " " << a << endl;
    return 0;
}
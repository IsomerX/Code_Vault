<<<<<<< HEAD
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    int correct = 0;
    vector<int> arr(n), arr2(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2.begin(), arr2.end());
    // 3214
    // 1234
    for(int i=0;i<n;i++){
        if(arr[i] > arr[i-1]){
            int j = i+1;

            while(j < n && arr[j] < arr[j-1]){
                j++;
            }
        }
    }
    return 0;
=======
#include <bits/stdc++.h>  
 
using namespace std;

int main()
{
    int n;
    int correct = 0;
    vector<int> arr(n), arr2(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2.begin(), arr2.end());
    // 3214
    // 1234
    for(int i=0;i<n;i++){
        if(arr[i] > arr[i-1]){
            int j = i+1;

            while(j < n && arr[j] < arr[j-1]){
                j++;
            }
        }
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
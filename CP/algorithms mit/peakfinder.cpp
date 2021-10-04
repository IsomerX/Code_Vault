#include<bits/stdc++.h>

using namespace std;


int findPeakUtil(vector<int> arr, int low,
                 int high, int n)
{
    int mid = low + (high - low) / 2;
 
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;
 
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeakUtil(arr, low, (mid - 1), n);

    else
        return findPeakUtil(
            arr, (mid + 1), high, n);
}

int findPeak(vector<int> arr, int n)
{
    return findPeakUtil(arr, 0, n - 1, n);
}

void finder1d(vector<int> a){
    // naive 
    // if(a[0] >= a[1]){
    //     cout << a[0] << endl;
    // }
    // else if(a[a.size()-1] >= a[a.size()-2]){
    //     cout << a[a.size()-1] << endl;
    // }
    // else
    //     for(int i = 1; i < a.size()-1; i++){
    //         if(a[i] >= a[i-1] && a[i] >= a[i+1]){
    //             cout << a[i] << endl;
    //             break;
    //         }
    //     }

    // binary search ish 
    cout << findPeak(a, a.size());
}

int main(){
    int n = 100;
    vector<int> a(n);
    generate(a.begin(), a.end(), []() {
        return rand() % 100;
    });
    finder1d(a);
    return 0;
}
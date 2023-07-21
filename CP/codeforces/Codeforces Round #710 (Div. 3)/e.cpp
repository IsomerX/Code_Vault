<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("test.txt", "r", stdin);
    #endif
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n+1,0), visited(n+1,0);
        unordered_map<int,int>a;
        queue<int> ab;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a[x]+=1;
            if(a[x] == 1){
                arr[i] = x;
            }
            visited[arr[i]] = 1;
        }
        vector<int> arr2(arr), temp;
        for(int i = 1; i <= n; i++){
            if(visited[i] == 0){
                ab.push(i);
                temp.push_back(i);
            }
        }  
        reverse(temp.begin(),temp.end());
        for(int i = 0; i <= n; i++){
            if(arr[i]==0){
                int x = ab.front();
                ab.pop();
                arr[i] = x;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr2[i+1] == 0) 
                for(auto k : temp){
                    if(arr2[i] > k && !visited[k]){
                        visited[k] = 1;
                        arr2[i+1] = k;
                        break;
                    }
                }
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < n; i++){
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("test.txt", "r", stdin);
    #endif
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n+1,0), visited(n+1,0);
        unordered_map<int,int>a;
        queue<int> ab;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a[x]+=1;
            if(a[x] == 1){
                arr[i] = x;
            }
            visited[arr[i]] = 1;
        }
        vector<int> arr2(arr), temp;
        for(int i = 1; i <= n; i++){
            if(visited[i] == 0){
                ab.push(i);
                temp.push_back(i);
            }
        }  
        reverse(temp.begin(),temp.end());
        for(int i = 0; i <= n; i++){
            if(arr[i]==0){
                int x = ab.front();
                ab.pop();
                arr[i] = x;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr2[i+1] == 0) 
                for(auto k : temp){
                    if(arr2[i] > k && !visited[k]){
                        visited[k] = 1;
                        arr2[i+1] = k;
                        break;
                    }
                }
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < n; i++){
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
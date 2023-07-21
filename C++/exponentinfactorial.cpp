<<<<<<< HEAD
// #include<bits/stdc++.h>
// #define inta long long
// using namespace std;

// // inta gif(inta a, inta b){
// // 	return a/b;
// // 	//learn to do division
// // }

// inta findpower(inta a, inta b){
// 	inta count = 0, c;
// 	c = b;
//     while(a/b){
//     	// cout << a << " " << b << " : " << gif(a,b) << endl;
//     	count += a/b;
//     	b *= c;
//     }
//     cout << c << " : ";
//     return count;
// }


// void powers(inta n)
// {
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true)
//         {

//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
 
//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << findpower(n, p) << endl;
// }


// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif


//     inta a;
//     cin >> a;

//     // powers(a);

//     // while(a--){
//     // 	cout << a << endl;
//     // 	powers(a);
//     // 	cout << endl;
//     // }


// 	return 0;
// }


// #include<bit/stdc++.h>

// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n, x;
// 		cin >> n >> x;
// 		set<int> s;
// 		vector<int> l(n), b;
// 		for(int i = 0; i < n; i++){
// 			cin >> l[i];
// 		}
// 		for(auto i : l){
// 			s.insert(i);
// 		}

// 		for(auto i : s){
// 			if(count(l.begin(),l.end(),i) == 1){
// 				b.push_back((i));
// 				auto it = std::find(l.begin(),l.end(),i);
// 				// check that there actually is a 3 in our vector
// 				if (it != l.end()) {
// 				  l.erase(it);
// 				}

// 			}
// 			else{
// 				while(count(l.begin(),l.end(),i) > 1){
// 					b.push_back((i));
// 					auto it = std::find(l.begin(),l.end(),i);
// 					// check that there actually is a 3 in our vector
// 					if (it != l.end()) {
// 					  l.erase(it);
// 					}

// 				}
// 			}
// 			if(b.size()>=x){
// 				break;
// 			}
// 		}
// 		if(b.size()<x){
// 			cout << l.size() - b.size() - x  << endl;
// 		}
// 		else{
// 			cout << l.size() << endl;
// 		}
// 	}
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
//     cin >> t;
//     while(t--){
//         int n, x;
//         cin >> n >> x;
//         map<int,int> a;
//         vector<int> b(n);
//         vector<int> high;
//         for(int i = 0; i < n; i++){
//             cin >> b[i];
//             a[b[i]]++;
//         }
//         set<int> ror;
//         for(int i = 0; i < n; i++){
//             ror.insert(b[i]);
//         }
//         for(auto i : ror){
//             if(a[i] > 1){
//                 high.push_back(i);
//             }
//         }
//         // for(int i = 0; i < n ; i++){
//         //     cout << b[i] << " : " << a[b[i]] << endl;
//         // }
//         // for(auto i : high){
//         //     cout << i << "; ";
//         // }
//         cout << endl;
//         while(x>0){
//             if(!high.empty()){
//                 a[high[0]]--;
//                 x--;
//                 if(a[high[0]]==0){
//                     high.erase(high.begin());
//                 }
//             }
//             else{
//                 for(int i = 0; i < n; i++){
//                     if(a[b[i]]>0){
//                         a[b[i]]--;
//                         x--;
//                         break;
//                     }
//                 }
//             }
//         }
//         // for(int i = 0; i < n ; i++){
//         //     cout << b[i] << " : " << a[b[i]] << endl;
//         // }
//         cout << endl;
//         int count = 0;
//         set<int> rr;
//         for(auto i : b){
//             rr.insert(i);
//         }
//         for(auto i:rr){
//             if(a[i]!=0)
//                 count++;
//         }
//         cout << count << endl;
//     }
// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        map<int,int> a;
        vector<int> b(n);
        vector<int> high;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            a[b[i]]++;
        }
        set<int> ror;
        for(int i = 0; i < n; i++){
            ror.insert(b[i]);
        }
        cout << "ROR : ";
        for(auto i : ror){
        	cout << i << " ";
        }
        cout << endl;
        for(auto i : ror){
            if(a[i] > 1){
            	// for(int j = 0; j < a[i]; j++)
                	high.push_back(i);
            }
        }

        cout << "high: ";
        for(auto i : high){
        	cout << i << " ";
        }
        cout << endl;
        // for(int i = 0; i < n ; i++){
        //     cout << b[i] << " : " << a[b[i]] << endl;
        // }
        // for(auto i : high){
        //     cout << i << "; ";
        // }
        //cout << endl;
        while(x>0){
        	if(!high.empty() && a[high[0]] <= 1)
        		high.erase(high.begin());
            if(!high.empty()){
                a[high[0]]--;
                x--;
                if(a[high[0]]==0){
                    high.erase(high.begin());
                }
            }
            else{
                for(int i = 0; i < n; i++){
                    if(a[b[i]]>0){
                        a[b[i]]--;
                        x--;
                        break;
                    }
                }
            }
        }
        // for(int i = 0; i < n ; i++){
        //     cout << b[i] << " : " << a[b[i]] << endl;
        // }
        //cout << endl;
        int count = 0;
        set<int> rr;
        for(auto i : b){
            rr.insert(i);
        }
        for(auto i:rr){
            if(a[i]!=0)
                count++;
        }
        cout << "ans: " << count << endl;
    }
	return 0;
}
=======
// #include<bits/stdc++.h>
// #define inta long long
// using namespace std;

// // inta gif(inta a, inta b){
// // 	return a/b;
// // 	//learn to do division
// // }

// inta findpower(inta a, inta b){
// 	inta count = 0, c;
// 	c = b;
//     while(a/b){
//     	// cout << a << " " << b << " : " << gif(a,b) << endl;
//     	count += a/b;
//     	b *= c;
//     }
//     cout << c << " : ";
//     return count;
// }


// void powers(inta n)
// {
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true)
//         {

//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
 
//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             cout << findpower(n, p) << endl;
// }


// int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif


//     inta a;
//     cin >> a;

//     // powers(a);

//     // while(a--){
//     // 	cout << a << endl;
//     // 	powers(a);
//     // 	cout << endl;
//     // }


// 	return 0;
// }


// #include<bit/stdc++.h>

// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n, x;
// 		cin >> n >> x;
// 		set<int> s;
// 		vector<int> l(n), b;
// 		for(int i = 0; i < n; i++){
// 			cin >> l[i];
// 		}
// 		for(auto i : l){
// 			s.insert(i);
// 		}

// 		for(auto i : s){
// 			if(count(l.begin(),l.end(),i) == 1){
// 				b.push_back((i));
// 				auto it = std::find(l.begin(),l.end(),i);
// 				// check that there actually is a 3 in our vector
// 				if (it != l.end()) {
// 				  l.erase(it);
// 				}

// 			}
// 			else{
// 				while(count(l.begin(),l.end(),i) > 1){
// 					b.push_back((i));
// 					auto it = std::find(l.begin(),l.end(),i);
// 					// check that there actually is a 3 in our vector
// 					if (it != l.end()) {
// 					  l.erase(it);
// 					}

// 				}
// 			}
// 			if(b.size()>=x){
// 				break;
// 			}
// 		}
// 		if(b.size()<x){
// 			cout << l.size() - b.size() - x  << endl;
// 		}
// 		else{
// 			cout << l.size() << endl;
// 		}
// 	}
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
//     cin >> t;
//     while(t--){
//         int n, x;
//         cin >> n >> x;
//         map<int,int> a;
//         vector<int> b(n);
//         vector<int> high;
//         for(int i = 0; i < n; i++){
//             cin >> b[i];
//             a[b[i]]++;
//         }
//         set<int> ror;
//         for(int i = 0; i < n; i++){
//             ror.insert(b[i]);
//         }
//         for(auto i : ror){
//             if(a[i] > 1){
//                 high.push_back(i);
//             }
//         }
//         // for(int i = 0; i < n ; i++){
//         //     cout << b[i] << " : " << a[b[i]] << endl;
//         // }
//         // for(auto i : high){
//         //     cout << i << "; ";
//         // }
//         cout << endl;
//         while(x>0){
//             if(!high.empty()){
//                 a[high[0]]--;
//                 x--;
//                 if(a[high[0]]==0){
//                     high.erase(high.begin());
//                 }
//             }
//             else{
//                 for(int i = 0; i < n; i++){
//                     if(a[b[i]]>0){
//                         a[b[i]]--;
//                         x--;
//                         break;
//                     }
//                 }
//             }
//         }
//         // for(int i = 0; i < n ; i++){
//         //     cout << b[i] << " : " << a[b[i]] << endl;
//         // }
//         cout << endl;
//         int count = 0;
//         set<int> rr;
//         for(auto i : b){
//             rr.insert(i);
//         }
//         for(auto i:rr){
//             if(a[i]!=0)
//                 count++;
//         }
//         cout << count << endl;
//     }
// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        map<int,int> a;
        vector<int> b(n);
        vector<int> high;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            a[b[i]]++;
        }
        set<int> ror;
        for(int i = 0; i < n; i++){
            ror.insert(b[i]);
        }
        cout << "ROR : ";
        for(auto i : ror){
        	cout << i << " ";
        }
        cout << endl;
        for(auto i : ror){
            if(a[i] > 1){
            	// for(int j = 0; j < a[i]; j++)
                	high.push_back(i);
            }
        }

        cout << "high: ";
        for(auto i : high){
        	cout << i << " ";
        }
        cout << endl;
        // for(int i = 0; i < n ; i++){
        //     cout << b[i] << " : " << a[b[i]] << endl;
        // }
        // for(auto i : high){
        //     cout << i << "; ";
        // }
        //cout << endl;
        while(x>0){
        	if(!high.empty() && a[high[0]] <= 1)
        		high.erase(high.begin());
            if(!high.empty()){
                a[high[0]]--;
                x--;
                if(a[high[0]]==0){
                    high.erase(high.begin());
                }
            }
            else{
                for(int i = 0; i < n; i++){
                    if(a[b[i]]>0){
                        a[b[i]]--;
                        x--;
                        break;
                    }
                }
            }
        }
        // for(int i = 0; i < n ; i++){
        //     cout << b[i] << " : " << a[b[i]] << endl;
        // }
        //cout << endl;
        int count = 0;
        set<int> rr;
        for(auto i : b){
            rr.insert(i);
        }
        for(auto i:rr){
            if(a[i]!=0)
                count++;
        }
        cout << "ans: " << count << endl;
    }
	return 0;
}
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

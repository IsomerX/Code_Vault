<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

struct node{
	int val;
	node* next = NULL;
};

int main(){
	#ifndef ONLINE_JUDGE 
  	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	
	int n;
	node* a = new node;
	a->val = 10;
	cout << "enter the number of elements" << endl;
	cin >> n;
	node* end = a;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		node* tempo = new node;
		tempo->val = temp;
		end->next = tempo;
		end = tempo;
	}
	cout << endl;
	cout << "you have entered ->" << endl;

	node* temp = a;

	while(temp!=NULL){
		cout << temp->val << " ";
		temp = temp->next;
	}
	return 0;
=======
#include <bits/stdc++.h>

using namespace std;

struct node{
	int val;
	node* next = NULL;
};

int main(){
	#ifndef ONLINE_JUDGE 
  	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif
	
	int n;
	node* a = new node;
	a->val = 10;
	cout << "enter the number of elements" << endl;
	cin >> n;
	node* end = a;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		node* tempo = new node;
		tempo->val = temp;
		end->next = tempo;
		end = tempo;
	}
	cout << endl;
	cout << "you have entered ->" << endl;

	node* temp = a;

	while(temp!=NULL){
		cout << temp->val << " ";
		temp = temp->next;
	}
	return 0;
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}
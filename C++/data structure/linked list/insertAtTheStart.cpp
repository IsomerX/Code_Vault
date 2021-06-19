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
	
	node* a = new node;
	node* b = new node;
	node* c = new node;
	node* d = new node;
	b->val = 11;
	c->val = 12;
	d->val = 15;
	a->val = 10;
	a->next = b;
	b->next = c;
	c->next = d;
 
	int nos;

	cout << "enter the element to be inserted in the beginning" << endl;

	cin >> nos;

	node* roar = new node;
	roar->val = nos;
	roar->next = a;

	node* temp = roar;

	while(temp!=NULL){
		cout << temp->val << " ";
		temp = temp->next;
	}
	return 0;
}
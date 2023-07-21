#include<bits/stdc++.h>

using namespace std;

struct node{
	int val;
	node* next = NULL;
};

node* header;

node* insert(node* head, int value){
	node* temp = new node;
	temp->val = value;
	if(head == NULL)
		head = temp;
	else{
		node* temp2 = head;
		while(temp2->next!=NULL){
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	return head;
}

void display(node* head){
	if(head == NULL)
		return;
	cout << head->val << " ";
	display(head->next);
}

void displayReverse(node* head){
	if(head == NULL)
		return;
	displayReverse(head->next);
	cout << head->val << " ";
}

node* head;

void reverse(node* tt) { 
    if(tt->next == NULL){
    	head = tt;
    	return;
    }
    reverse(tt->next);
    node* q = tt->next;
    q->next = tt;
    tt->next = NULL;
} 

int main(){

	#ifndef ONLINE_JUDGE 
  	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif

	int temp, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> temp;
		header = insert(header,temp);
	}
	display(header);
	reverse(header);
	cout << endl;
	display(head);
	return 0;
}
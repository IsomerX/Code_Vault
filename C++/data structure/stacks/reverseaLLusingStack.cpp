#include "Stack.h"

struct node{
	int val;
	node* next = NULL;
};

node* head;

node* ins(int value){
	if(head == NULL){
		head = new node;
		head->val = value;
		return head;
	}
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new node;
	temp->next->val = value;
	return head;
}

void dis(){
	node* temp;
	temp = head;
	while(temp!=NULL){
		cout << temp->val << " ";
		temp=temp->next;
	}
	cout << endl;
	return;
}

int main(){
	#ifndef ONLINE_JUDGE 
  	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif

    for(int i = 1; i <= 10; i++){
    	head = ins(i*23);
    }

    dis();

    Stack rev;
    node* temp = head;

    while(temp!=NULL){
    	rev.push(temp->val);
    	temp = temp->next;
    }

    rev.display();
    temp = head;

    while(rev.getSize()>0){
    	temp->val = rev.top();
    	rev.pop();
    	temp=temp->next;
    }

    dis();
    dis();

	return 0;
}
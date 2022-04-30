#include<bits/stdc++.h>

using namespace std;

struct dubNode{
	int val;
	dubNode* next = NULL;
	dubNode* prev = NULL;
};

dubNode* head;

dubNode* insert(dubNode* header, int value){
	if(header == NULL){
		header = new dubNode;
		header->val = value;
		return header;
	}

	dubNode* temp = header;

	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new dubNode;
	temp->next->val = value;
	temp->next->prev = temp;
	return header;
}

void display(){
	dubNode* temp = head;
	while(temp->next != NULL){
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;

	while(temp!=NULL){
		cout << temp->val << " ";
		temp = temp->prev;
	}
	cout << endl;
	return;
}

void del(int pos){
	int counter = 1;
	dubNode* temp = head;

	while(counter < pos){
		temp = temp->next;
		counter++;
	}
	temp->next->next->prev = temp;
	temp->next = temp->next->next;
	return;
}

int main(){
	#ifndef ONLINE_JUDGE 
  	freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
	#endif

    int temp;
    for(int i = 0; i < 10; i++){
    	cin >> temp;
    	head = insert(head, temp);
    }
	
	display();
	del(8);
	cout << "\n";
	display();

	return 0;
}
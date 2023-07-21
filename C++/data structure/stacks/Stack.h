<<<<<<< HEAD
#pragma once

#include <bits/stdc++.h>
using namespace std;
class Stack{
	vector<int> a;
	int size;

public:
	Stack(){
		size = 0;
	}
	void push(int val){
		if(a.size() > size)
			a[size] = val, size++;
		else
			a.emplace_back(val),size++;
	}
	void pop(){
		if(size == 0){
			cout << "Empty array" << endl; 
			return;
		}
		cout << "Element to be deleted: " << a[(--size)] << endl;
	}
	void display(){
		for(int i = size-1; i>=0;i--){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	int getSize(){
		return size;
	}

	int top(){
		return a[size-1];
	}
};
=======
#pragma once

#include <bits/stdc++.h>
using namespace std;
class Stack{
	vector<int> a;
	int size;

public:
	Stack(){
		size = 0;
	}
	void push(int val){
		if(a.size() > size)
			a[size] = val, size++;
		else
			a.emplace_back(val),size++;
	}
	void pop(){
		if(size == 0){
			cout << "Empty array" << endl; 
			return;
		}
		cout << "Element to be deleted: " << a[(--size)] << endl;
	}
	void display(){
		for(int i = size-1; i>=0;i--){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	int getSize(){
		return size;
	}

	int top(){
		return a[size-1];
	}
};
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b

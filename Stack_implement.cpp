#include<iostream>
#include <bits/stdc++.h>
using namespace std;

#define Max 3
int i= 1;
class Stack{
	
public:
	int top;
	int Array[Max];
	Stack() { top = -1; cout << top << endl;}
	bool push(int);
	int pop();
	bool isEmpty();
	bool isFull();
	print();
};
bool Stack :: isEmpty(){
	if(top < 0){
		return true;
	}
	else 
		return false;
}
bool Stack :: isFull(){
	if(top == (Max-1)){
		cout << top << endl;
		return true;
	}
	else 
		return false;
}
bool Stack :: push(int x){
	if(top >= (Max-1)){
		cout << "m" << top << endl;
		cout << "Stack overflow" << endl;
		return false;
	}
	else{
		Array[++top] = x;
		cout << x  << "is pushed"  << endl;
		return true;
	}
}
int Stack :: pop(){
	if(isEmpty() == true){

		cout << "Stack Underflow" <<endl;
	}
	else{
		int x = Array[top--];
		
		return(x);
	}
}
 Stack :: print(){
	int i = 0;
	for(i = Max; i > -1;i--){
		cout << Array[i] << endl;
	}
}
int main(){
	class Stack s;
	s.push(3);
	s.push(4);
	s.push(5);
	s.print();
	int i =0;
	for(i = Max ; i > -1 ;i--){
		cout << s.pop() << " Is popped" << endl;
	}
}


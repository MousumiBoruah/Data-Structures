#include<iostream>
using namespace std;

class node{
public:
	int data;
	node *next;
};

void push(node **head,int data){
	node *new_node = new node();
	new_node->data = data;
	new_node->next = (*head);
	(*head) = new_node;
	return;
}
void print(node *head){
	while(head != NULL){
		cout << "| " << head->data << " |" << endl;
		cout << "|___|" <<endl;
		head = head->next;

	}
}

void pop(node **head){
	(*head) = (*head)->next;
}

int main(){
	node *head = NULL;

	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,5);
	print(head);
	cout << "\n\nSTACK AFTER POPPING\n\n" ;
	pop(&head);
	print(head);
}
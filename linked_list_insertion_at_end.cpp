#include<iostream>
using namespace std;

class node{
public:
	int data;
	node *next;
};

void insert(node **head,int data){
	node *new_node = new node();
	new_node->data = data;
	new_node->next = NULL;

	node *trav = *head;

	if(*head == NULL){
		
		*head = new_node;
		return;
	}

	while(trav->next != NULL){
		trav=trav->next;
	}
	trav->next = new_node;
	return;

}

void push(node **head,int data){
	node *new_node = new node();
	new_node->data = data;
	new_node->next = (*head);

	(*head) = new_node;

}

void insert_after(node *head,int data,int node_number){
	node *new_node = new node();
	new_node->data = data;
	new_node->next = NULL;
	int count=1;
	while(head != NULL){
		cout << count << endl;
		if(count == node_number){
			new_node->next = head->next;
			head->next = new_node;
			return;
		}
		else {
			head=head->next;
			count++;
		}
}
}

print(node *head){

	while(head != NULL){
		cout << head->data << "->" ;
		head = head->next;
	}
	cout << "NULL" << endl;
}

int main(){

	node *head = NULL;

	insert(&head,1);
	insert(&head,2);
	insert(&head,3);
	insert(&head,4);
	push(&head,0);
	insert_after(head,6,4);

	print(head);

}
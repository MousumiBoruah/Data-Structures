#include<iostream>
using namespace std;

class DLL{
public:
	int data;
	DLL *prev;
	DLL *next;
};

void insertion_end(DLL **head,int x){

	DLL *new_node = new DLL();
	new_node->data=x;
	new_node->next = NULL;

	DLL *trav = *head;

	if(*head == NULL){
		new_node->prev=NULL;
		*head = new_node;
		return;
	}

	while(trav->next != NULL)
		trav=trav->next;

	trav->next = new_node;
	new_node->prev = trav;
	return;
}

void insertion_front(DLL **head,int x){
	DLL *new_node = new DLL();
	new_node->data = x;
	//head changed to new node
	new_node->next = (*head);
	new_node->prev = NULL;

	if((*head) != NULL){
		(*head)->prev = new_node;
	}
	(*head) = new_node;
}

void insertion_after(DLL **head,int x,int node_number){
	DLL *new_node = new DLL();
	new_node->data = x;
	DLL *trav = (*head);
	int count = 1;
	while( trav->next != NULL){
		if(count == node_number){
			new_node->next = trav->next;
			new_node->next->prev = new_node;
			trav->next = new_node;
			new_node->prev = trav;
			return;
		}
		else{
			trav = trav->next;
			count++;
		}
	}
}

void reverse(DLL **head){
	DLL *temp = NULL;
	DLL *trav = (*head);

	while(trav != NULL){
		temp = trav->prev;
		trav->prev = trav->next;
		trav->next = temp;
		trav = trav->prev;
	}

	if(temp != NULL)
		*head = temp->prev;
}

void deletion_front(DLL **head){
	DLL *temp = NULL;
	temp = (*head)->next;
	temp->prev = NULL;
	(*head) = temp;
	return;

}

void deletion_end(DLL **head){
	DLL *trav = (*head);
	while(trav->next != NULL){
		trav = trav->next;
	}
	trav->prev->next = NULL;
	return;
}

void deletion_after(DLL **head,int x){
	DLL *trav = (*head);
	while(trav->next != NULL){
		if(trav->data == x){
			trav->prev->next = trav->next;
			trav->next->prev = trav->prev;
			return;
		}
		else{
			trav = trav->next;
		}
	}
}
print(DLL *head){

	while(head != NULL){
		cout << head->data << "->" ;
		head = head->next;
	}
	cout << "NULL" << endl;
}


int main(){
	DLL *head = NULL;

	insertion_end(&head,1);
	cout << "INSERTION AT THE END" << endl;
	print(head);
	insertion_end(&head,3);
	cout << "INSERTION AT THE END" << endl;
	print(head);
	insertion_front(&head,0);
	cout << "INSERTION AT THE FRONT" <<endl;
	print(head);
	insertion_after(&head,2,2);
	cout << "INSERTION AFTER NODE 2" <<endl;
	print(head);
	reverse(&head);
	cout << "REVERSE OF THE DOUBLY LINKED LIST" <<endl;
	print(head);
	deletion_after(&head,2);
	cout << "DELETION OF 2" << endl;
	print(head);
	deletion_front(&head);
	cout << "DELETION AT THE FRONT" << endl;
	print(head);
	deletion_end(&head);
	cout << "DELETION AT THE END" << endl;
	print(head);

}


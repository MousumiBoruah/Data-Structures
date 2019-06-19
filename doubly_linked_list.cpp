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
print(DLL *head){

	while(head != NULL){
		cout << head->data << "->" ;
		head = head->next;
	}
	cout << "NULL" << endl;
}


int main(){
	DLL *head = NULL;

	insertion_end(&head,7);
	insertion_end(&head,8);
	print(head);

}


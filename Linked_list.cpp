#include<iostream>
using namespace std;

class node{
public:
	int data;
	node *next;
};

int main(){

	node *head;
	node *first;
	node *second;
    node *third;
    node *trav;

    head = new node();
    first = new node();
    second = new node();
    third = new node();
    trav = new node();

    head->next = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    trav = head;
    while(trav->next != NULL){
    	cout << trav->next->data << "->";
    	trav = trav->next;
    }
    cout << "NULL" ;
}
#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};

void insertAtBeginning(node* &head,int d){
	node* newnode = new node();
	newnode->data = d;
	newnode->next= head;
	head = newnode;
}
int main(){
	node* head = new node();
	head->data = 1;
	head->next = new node();
	head->next->data = 2;
	head->next->next = new node();
	head->next->next->data =3;
	head->next->next->next = NULL;
	insertAtBeginning(head , 0);
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

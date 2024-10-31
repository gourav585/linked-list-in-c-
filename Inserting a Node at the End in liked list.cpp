#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
void insertAtEnd(node* &head, int newdata){
	node* newnode = new node();
	newnode->data = newdata;
	newnode->next = NULL;
	
	if(head == NULL){
		head = newnode;
		return ;
	}
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newnode;
}
int main(){
	node* head = NULL;
	insertAtEnd(head,1);
	insertAtEnd(head,2);
	insertAtEnd(head,3);
	
	node* temp =head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	
	
}

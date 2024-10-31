#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void insertAtBeginning(node* &head,int newdata){
    node* newnode = new node(); // Step 1: Create new node
    newnode->data = newdata;  // Assign data to new node
    newnode->next = head;   // Link new node to current head
    head = newnode;   // Update head to new node
}
int main(){
    node* head = NULL;
    insertAtBeginning(head,3);  // Insert 3 at the beginning
    insertAtBeginning(head,2);  // Insert 2 at the beginning
    insertAtBeginning(head,1);  // Insert 1 at the beginning
    
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

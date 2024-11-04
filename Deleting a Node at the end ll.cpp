#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtEnd(node* &head,int newdata){
    node* newnode = new node(newdata);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void deleteAtEnd(node* &head){
    if(head ==NULL){
        cout<<"liked list is empty"<<endl;
        return;
    }
    if(head->next ==NULL){
        delete head;
        head = NULL;
    }
    node* temp = head ;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
void printList(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head = NULL;
    insertAtEnd(head,1);
     insertAtEnd(head,2);
      insertAtEnd(head,3);
       insertAtEnd(head,4);
       insertAtEnd(head,5);
        cout << "List after insertion: ";
       printList(head);
       
       deleteAtEnd(head);
       cout<<endl;
       cout << "List after deleting the last node: ";
    printList(head);
       
}

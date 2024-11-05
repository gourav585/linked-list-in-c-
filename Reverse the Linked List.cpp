#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next =NULL;
    }
};
void insertAtEnd(node* &head,int newdata){
    node* newnode= new node(newdata);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void reverseList(node* &head){
    node* cur = head;
    node* prev = NULL;
    node* next = NULL;
    while(cur != NULL){
        next = cur->next;
        
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    head = prev;
}
void printfun(node* &head){
    node* temp = head;
    while(temp!=NULL){
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
    
    cout<<"this is your normal list=> ";
    printfun(head);
    cout<<endl;
    reverseList(head);
    cout<<"this is your reverse list=> ";
    printfun(head);
   // reverseList(head);
    
    
}

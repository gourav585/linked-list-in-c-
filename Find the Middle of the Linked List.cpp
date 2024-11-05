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
    newnode->next;
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
node* findMiddle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void printll(node* &head){
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
       
       cout<<"this is your normal linked list=> ";
       printll(head);
       cout<<endl;
       node* middle = findMiddle(head);
       cout<<"this is your middle=> "<<middle->data;
}

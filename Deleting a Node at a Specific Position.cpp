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
void insertAtPosition(node* &head,int newdata,int pos){
    node* newnode = new node(newdata);
    newnode->next = NULL;
    if(pos ==0){
        newnode->next = head;
        head = newnode;
        return;
    }
    node* temp = head;
    for(int i=0;i<pos-1;++i){
        if(temp == NULL){
            cout<<"Position out of bounds" << endl;
            return;
        }
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void deleteAtPosition(node* &head,int pos){
    if(head ==NULL){
        cout<<"list is already empty";
        return;
    }
    if(pos==0){
        node* temp = head;
        head = head->next;
        delete temp;
    }
    node* temp = head;
    for(int i=0;i<pos-1;++i){
        if(temp == NULL || temp->next ==NULL){
            cout<<"Position out of bounds" << endl;
            return;
        }
        temp = temp->next;
    }
    node* dnode = temp->next;
    temp->next = dnode->next;
    delete dnode;
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
    insertAtPosition(head,1,0);
    insertAtPosition(head,2,1);
    insertAtPosition(head,3,2);
    insertAtPosition(head,4,3);
    cout << "List after insertion: ";
        printList(head);
        deleteAtPosition(head,2);
        cout<<endl;
        cout << "List after deleting the first node: ";
    printList(head);
}

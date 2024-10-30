#include <iostream>
using namespace std;

struct Node {
    int data;       // Data part
    Node* next;     // Pointer to the next node
};

int main() {
    Node* head = new Node(); // First node (head)
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;          // Assign data to head node
    head->next = second;     // Link first node to second node

    second->data = 2;
    second->next = third;    // Link second node to third node

    third->data = 3;
    third->next = NULL;   // Last node points to NULL

    // Printing the list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}


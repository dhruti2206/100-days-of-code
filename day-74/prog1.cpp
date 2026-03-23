//remove duplicates from linked list
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
void removeDuplicates(Node* head) {
    if (head == nullptr) return;
    Node* current = head;
    while (current->next != nullptr) {
        if (current->data == current->next->data) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp; 
        } else {
            current = current->next; 
        }
    }
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);
    cout << "Original linked list: ";
    printList(head);
    removeDuplicates(head);
    cout << "Linked list after removing duplicates: ";
    printList(head);    
    return 0;
}

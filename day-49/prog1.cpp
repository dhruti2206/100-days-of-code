//reverse linked list
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next; 
        current->next = prev; 
        prev = current;       
        current = next;       
    }
    return prev; // New head of the reversed list
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    cout << "Original Linked List: ";
    printList(head);
    head = reverseList(head);
    cout << "Reversed Linked List: ";
    printList(head);
    return 0;
}

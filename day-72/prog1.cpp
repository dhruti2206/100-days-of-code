//detect loop in linked list
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
bool detectLoop(Node* head) {
    if (head == nullptr) return false;
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next; 
        fast = fast->next->next;
        if (slow == fast) return true; // Loop detected
    }
    return false;//no loop
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout << "Linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 2" << endl;   
    head->next->next->next->next->next = head->next; // Loop back to node with value 2
    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }
    return 0;
}

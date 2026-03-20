//find middle element of linked list
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
Node* findMiddle(Node* head) {
    if (head == nullptr) return nullptr;
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow; 
}
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next=new Node(6);
    cout << "Linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6" << endl;
    Node* middle = findMiddle(head);
    if (middle) {
        cout << "Middle element of the linked list is: " << middle->data << endl;
    } else {
        cout << "The linked list is empty." << endl;
    }
    return 0;
}

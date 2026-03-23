//find nth node from end of linked list
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
Node* findNthFromEnd(Node* head, int n) {
    if (head == nullptr) return nullptr;
    Node* first = head;
    Node* second = head;
    for (int i = 0; i < n; i++) {
        if (first == nullptr) return nullptr;//n is greater than the length of the list
        first = first->next;
    }
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }
    return second; 
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
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    cout << "Linked list: ";
    printList(head);
    int n;
    cout << "Enter the value of n to find the nth node from the end: ";
    cin >> n;
    Node* nthNode = findNthFromEnd(head, n);
    if (nthNode) {
        cout << "The " << n << "th node from the end is: " << nthNode->data << endl;
    } else {
        cout << "The linked list has fewer than " << n << " nodes." << endl;
    }    
    return 0;
}


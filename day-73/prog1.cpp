//merge 2 sorted linked lists
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
Node* mergeSortedLists(Node* head1, Node* head2) {
    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;
    
    Node* mergedHead = nullptr;
    if (head1->data < head2->data) {
        mergedHead = head1;
        mergedHead->next = mergeSortedLists(head1->next, head2);
    } else {
        mergedHead = head2;
        mergedHead->next = mergeSortedLists(head1, head2->next);
    }
    return mergedHead;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head1 = new Node(1);
    head1->next = new Node(3);
    head1->next->next = new Node(5);
    
    Node* head2 = new Node(2);
    head2->next = new Node(4);
    head2->next->next = new Node(6);
    
    cout << "First sorted linked list: ";
    printList(head1);
    cout << "Second sorted linked list: ";
    printList(head2);
    
    Node* mergedHead = mergeSortedLists(head1, head2);
    cout << "Merged sorted linked list: ";
    printList(mergedHead);
    
    return 0;
}


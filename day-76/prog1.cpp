//check palindrome in linked list
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    return prev;
}
// Function to check palindrome
bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) return true;
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* secondHalfHead = reverseList(slow);
    Node* firstHalfHead = head;
    while (secondHalfHead != nullptr) {
        if (firstHalfHead->data != secondHalfHead->data) {
            return false;
        }
        firstHalfHead = firstHalfHead->next;
        secondHalfHead = secondHalfHead->next;
    }
    return true;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    int n, value;
    cout << "Enter number of nodes: ";
    cin >> n;
    if (n <= 0) {
        cout << "List is empty!" << endl;
        return 0;
    }
    cout << "Enter elements: ";
    cin >> value;
    Node* head = new Node(value);
    Node* temp = head;
    for (int i = 1; i < n; i++) {
        cin >> value;
        temp->next = new Node(value);
        temp = temp->next;
    }
    cout << "Linked list: ";
    printList(head);
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }
    return 0;
}

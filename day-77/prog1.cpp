//intersection of 2 linked list
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
Node* findIntersection(Node* headA, Node* headB) {
    if (headA == nullptr || headB == nullptr) return nullptr;
    Node* ptrA = headA;
    Node* ptrB = headB;
    while (ptrA != ptrB) {
        ptrA = (ptrA == nullptr) ? headB : ptrA->next;
        ptrB = (ptrB == nullptr) ? headA : ptrB->next;
    }
    return ptrA;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    int n, m, value;
    cout << "Enter number of nodes in first list: ";
    cin >> n;
    cout << "Enter number of nodes in second list: ";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "One of the lists is empty!" << endl;
        return 0;
    }
    // Create first list
    cout << "Enter elements for first list:\n";
    Node* headA = nullptr;
    Node* tempA = nullptr;
    for (int i = 0; i < n; i++) {
        cin >> value;
        if (headA == nullptr) {
            headA = new Node(value);
            tempA = headA;
        } else {
            tempA->next = new Node(value);
            tempA = tempA->next;
        }
    }
    // Create second list
    cout << "Enter elements for second list:\n";
    Node* headB = nullptr;
    Node* tempB = nullptr;
    for (int i = 0; i < m; i++) {
        cin >> value;
        if (headB == nullptr) {
            headB = new Node(value);
            tempB = headB;
        } else {
            tempB->next = new Node(value);
            tempB = tempB->next;
        }
    }
    if (n > 2 && m > 0) {
        Node* intersectNode = headA;
        // Move to 3rd node of list A
        for (int i = 1; i < 3 && intersectNode != nullptr; i++) {
            intersectNode = intersectNode->next;
        }
        // Connect last node of B to this node
        tempB->next = intersectNode;
    }
    cout << "\nFirst linked list: ";
    printList(headA);
    cout << "Second linked list: ";
    printList(headB);
    Node* intersectionNode = findIntersection(headA, headB);

    if (intersectionNode) {
        cout << "Intersection node value: " << intersectionNode->data << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}

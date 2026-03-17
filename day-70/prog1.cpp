//lowest common ancestor in a binary tree
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
Node* findLCA(Node* root, int n1, int n2) {
    if (root == nullptr) return nullptr;
    if (root->data == n1 || root->data == n2) return root;
    Node* leftLCA = findLCA(root->left, n1, n2);
    Node* rightLCA = findLCA(root->right, n1, n2);
    if (leftLCA && rightLCA) return root; 
    return (leftLCA != nullptr) ? leftLCA : rightLCA;
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int n1, n2;
    cout << "Enter two nodes to find their lowest common ancestor: ";
    cin >> n1 >> n2;
    Node* lca = findLCA(root, n1, n2);
    if (lca) {
        cout << "Lowest Common Ancestor of " << n1 << " and " << n2 << " is: " << lca->data << endl;
    } else {
        cout << "One or both nodes not found in the tree." << endl;
    }
    return 0;
}

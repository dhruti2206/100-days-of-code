//search in binary search tree
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
bool search(Node* root, int key) {
    if (root == nullptr) return false;
    if (root->data == key) return true;
    if (key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}
int main() {
    int key;
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    cout<<"binary search tree: "<<endl;
    cout<<"        10"<<endl;
    cout<<"       /  \\"<<endl; 
    cout<<"      5    15"<<endl;
    cout<<"     / \\"<<endl;
    cout<<"    3   7"<<endl;
    cout << "Enter the element to search in the binary search tree: ";
    cin >> key;
    if (search(root, key)) {
        cout << "Element " << key << " found in the binary search tree." << endl;
    } else {
        cout << "Element " << key << " not found in the binary search tree." << endl;
    }
    return 0;
}

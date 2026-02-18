//reverse vector
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Original vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    // Reverse the vector
    for (int i = 0; i < v.size() / 2; i++) {
        swap(v[i], v[v.size() - 1 - i]);
    }
    cout << "Reversed vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

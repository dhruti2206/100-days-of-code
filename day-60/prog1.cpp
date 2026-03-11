// next greater element
#include<iostream>
#include<stack>
using namespace std;
void nextGreaterElement(int arr[], int n) {
    stack<int> s;
    s.push(arr[0]);
    for (int i = 1; i < n; i++) {
        while (!s.empty() && s.top() < arr[i]) {
            cout << s.top() << " --> " << arr[i] << endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while (!s.empty()) {
        cout << s.top() << " --> " << -1 << endl;
        s.pop();
    }
}
int main() {
    int arr[] = {4, 5, 2, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    nextGreaterElement(arr, n);
    return 0;
}

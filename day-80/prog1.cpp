//hashing
#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map<int, int> frequency;
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    cout << "Element : Frequency" << endl;
    for (const auto& pair : frequency) {
        cout << pair.first << " : " << pair.second << endl;
    }   
    return 0;
}

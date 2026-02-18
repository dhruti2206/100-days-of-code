//set operation to remove duplicates from an array
#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    cout << "Unique elements in the array: ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

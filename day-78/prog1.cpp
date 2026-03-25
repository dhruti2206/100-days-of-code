//find majority element(Moore’s Voting Algorithm)
#include <iostream>
using namespace std;
int majorityElement(int arr[], int n) {
    int count = 0, candidate = -1;
    // Step 1: Find a candidate for majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }    
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    return (count > n / 2) ? candidate : -1; 
}
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = majorityElement(arr, n);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element exists." << endl;
    }
    return 0;
}


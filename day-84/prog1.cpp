//find missing number using XOR
#include <iostream>
using namespace std;
int findMissingNumber(int arr[], int n) {
    int xorAll = 0;
    int xorArr = 0;
    for (int i = 1; i <= n; i++) {
        xorAll ^= i;
    }
    for (int i = 0; i < n - 1; i++) {
        xorArr ^= arr[i];
    }
    return xorAll ^ xorArr;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter " << n - 1 << " numbers (from 1 to " << n << "): ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}

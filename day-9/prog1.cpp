//armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, originalN, remainder, result = 0, digits = 0;
    cout << "Enter an integer: ";
    cin >> n;
    originalN = n;

    // Count number of digits
    while (originalN != 0) {
        originalN /= 10;
        ++digits;
    }

    originalN = n;

    // Calculate the sum of the power of each digit
    while (originalN != 0) {
        remainder = originalN % 10;
        result += pow(remainder, digits);
        originalN /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;

    return 0;
}

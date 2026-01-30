//reverse a number using recursion
#include <iostream>
using namespace std;
int reverseNum(int n, int rev = 0) {
    if (n == 0)
        return rev;
    int digit = n % 10;
    rev = rev * 10 + digit;
    return reverseNum(n / 10, rev);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverseNum(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}

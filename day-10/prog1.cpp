//strong number
#include <iostream>
using namespace std;
int main() {
    int n, temp, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;  
    while (n > 0) {
        digit = n % 10;   
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;    
        }
        sum += fact;      
        n /= 10;          
    }
    if (sum == temp)
        cout << temp << " is a Strong Number." << endl;
    else
        cout << temp << " is not a Strong Number." << endl;

    return 0;
}

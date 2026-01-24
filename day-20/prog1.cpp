//substring check
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, sub;

    cout << "Enter main string: ";
    cin >> str;
    cout << "Enter substring to check: ";
    cin >> sub;

    // Using find()
    if (str.find(sub) != string::npos) {
        cout << "Substring found!" << endl;
    } else {
        cout << "Substring not found!" << endl;
    }

    return 0;
}

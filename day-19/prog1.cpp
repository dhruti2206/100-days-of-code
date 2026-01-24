//anagram check
#include <iostream>
#include <algorithm>   
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return (str1 == str2);
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (areAnagrams(s1, s2))
        cout << "Strings are anagrams" << endl;
    else
        cout << "Strings are not anagrams" << endl;

    return 0;
}

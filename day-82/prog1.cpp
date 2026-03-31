//implement strstr() (substring search)
#include <iostream>
using namespace std;
char* my_strstr(const char* str, const char* substr) {
    if (!str || !substr) return nullptr;
    int len1 = 0, len2 = 0;
    while (str[len1]) len1++;
    while (substr[len2]) len2++;
    if (len2 == 0) return const_cast<char*>(str);
    if (len1 < len2) return nullptr;
    for (int i = 0; i <= len1 - len2; i++) {
        bool match = true;
        for (int j = 0; j < len2; j++) {
            if (str[i + j] != substr[j]) {
                match = false;
                break;
            }
        }
        if (match) return const_cast<char*>(str + i);
    }
    return nullptr;
}
int main() {
    const char* str = "hello world";
    const char* substr = "world";
    char* result = my_strstr(str, substr);
    if (result) {
        cout << "Substring found at position: " << (result - str) << endl;
    } else {
        cout << "Substring not found." << endl;
    }    
    return 0;
}

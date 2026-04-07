//Print all subsequences of string
#include<iostream>
#include<vector>
using namespace std;
void generateSubsequences(string str, string current, int index, vector<string>& result) {
    if (index == str.length()) {
        result.push_back(current);
        return;
    }
    generateSubsequences(str, current + str[index], index + 1, result);
    generateSubsequences(str, current, index + 1, result);
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    vector<string> subsequences;
    generateSubsequences(str, "", 0, subsequences);
    cout << "Subsequences of the string are:\n";
    for (const string& subseq : subsequences) {
        cout << subseq << endl;
    }
    return 0;
}

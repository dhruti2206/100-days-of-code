//smallest window containing all characters of another string
#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;
string minWindow(string s, string t) {
    unordered_map<char, int> freq;
    for (char c : t) {
        freq[c]++;
    }
    int left = 0, right = 0;
    int count = t.length();
    int minLen = INT_MAX;
    int start = 0;
    while (right < s.length()) {
        if (freq[s[right]] > 0) {
            count--;
        }
        freq[s[right]]--;
        right++;
        while (count == 0) {
            if (right - left < minLen) {
                minLen = right - left;
                start = left;
            }
            freq[s[left]]++;
            if (freq[s[left]] > 0) {
                count++;
            }
            left++;
        }
    }
    return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
}
int main() {
    string s, t;
    cout << "Enter main string: ";
    cin >> s;
    cout << "Enter pattern string: ";
    cin >> t;
    string result = minWindow(s, t);
    if (result == "")
        cout << "No valid window found\n";
    else
        cout << "Smallest window: " << result << endl;
    return 0;
}

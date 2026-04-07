//generate parantheses(backtracking)
#include <iostream>
#include <vector>
using namespace std;
void generateParentheses(int n, string current, int open, int close, vector<string>& result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    if (open < n) {
        generateParentheses(n, current + '(', open + 1, close, result);
    }
    if (close < open) {
        generateParentheses(n, current + ')', open, close + 1, result);
    }
}
int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;
    vector<string> parentheses;
    generateParentheses(n, "", 0, 0, parentheses);
    cout << "Generated parentheses combinations are:\n";
    for (const string& paren : parentheses) {
        cout << paren << endl;
    }
    return 0;
}

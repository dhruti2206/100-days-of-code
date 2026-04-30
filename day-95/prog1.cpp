//First negative number in window
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
vector<int> firstNegativeInWindow(vector<int>& arr, int k) {
    vector<int> result;
    deque<int> dq; 

    for (size_t i = 0; i < arr.size(); i++) {
        
        while (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }

        // If the current element is negative, add its index to the deque
        if (arr[i] < 0) {
            dq.push_back(i);
        }

        if (i >= k - 1) {
            if (!dq.empty()) {
                result.push_back(arr[dq.front()]);
            } else {
                result.push_back(0); // No negative number in this window
            }
        }
    }

    return result;
}
int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    vector<int> negatives = firstNegativeInWindow(arr, k);
    for (int num : negatives) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

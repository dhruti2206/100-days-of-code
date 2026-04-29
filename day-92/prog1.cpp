//Count distinct elements in window
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> countDistinctElements(vector<int>& arr, int k) {
    vector<int> result;
    unordered_set<int> window;
    
    // Insert first k elements into the set
    for (int i = 0; i < k; i++) {
        window.insert(arr[i]);
    }
    result.push_back(window.size());
    
    for (int i = k; i < arr.size(); i++) {
        // Remove the element going out 
        window.erase(arr[i - k]);
        // Add the new element coming
        window.insert(arr[i]);
        
        result.push_back(window.size());
    }
    
    return result;
}
int main() {
    vector<int> arr = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    
    vector<int> distinctCounts = countDistinctElements(arr, k);
    
    for (int count : distinctCounts) {
        cout << count << " ";
    }
    cout << endl;   
    return 0;
}

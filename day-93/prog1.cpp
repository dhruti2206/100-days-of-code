//Aggressive cows problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isFeasible(vector<int>& stalls, int cows, int distance) {
    int count = 1; 
    int lastPosition = stalls[0];

    for (size_t i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPosition >= distance) {
            count++; // Place another cow
            lastPosition = stalls[i]; // Update the last position
        }
        if (count >= cows) return true; 
    }
    return false; 
}
int aggressiveCows(vector<int>& stalls, int cows) {
    sort(stalls.begin(), stalls.end()); // Sort stall positions
    int left = 1; // Minimum distance
    int right = stalls.back() - stalls.front(); // Maximum distance
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Mid distance

        if (isFeasible(stalls, cows, mid)) {
            result = mid; 
            left = mid + 1;
        } else {
            right = mid - 1; 
        }
    }
    return result;
}
int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int cows = 2;
    int maxDistance = aggressiveCows(stalls, cows);
    cout << "The largest minimum distance is: " << maxDistance << endl;
    return 0;
}

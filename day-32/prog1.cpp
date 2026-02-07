//binary search
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,5,6,7,8,9};
    int target = 5;
    int low = 0;
    int high = v.size() - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] == target){
            cout << "Found at index: " << mid << endl;
            return 0;
        }
        else if(v[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << "Not found" << endl;
    return 0;
}

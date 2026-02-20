//first non-repeating element 
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] ={1, 2, 3, 4, 5, 2, 3, 1};
    int n=sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> frequency;
    for (int i=0; i<n; i++) {
        frequency[arr[i]]++;
    }
    cout <<"First Non-Repeating Element: ";
    for (int i=0; i<n; i++) {
        if (frequency[arr[i]] == 1) {
            cout <<arr[i]<< endl;
            break;
        }
    }
    return 0;
}

//map frequecncy count 
#include<iostream>
#include<map>
using namespace std;
int main() {
    int arr[]={1, 2, 3, 4, 5, 2, 3, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    map<int, int> frequency;
    for (int i=0; i<n; i++) {
        frequency[arr[i]]++;
    }
    cout << "Element Frequency Count:" << endl;
    for (auto it = frequency.begin(); it != frequency.end(); ++it) {
        cout << "Element: " << it->first << ", Frequency: " << it->second << endl;
    }
    return 0;
}

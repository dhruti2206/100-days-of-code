//vector of pairs
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<pair<int, string>> v;
    v.push_back({1, "one"});
    v.push_back({2, "two"});
    v.push_back({3, "three"});
    cout << "Vector of pairs: " << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " - " << v[i].second << endl;
    }
    return 0;
}

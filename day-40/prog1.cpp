
//map & unordered_map
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> m;
    m["apple"] = 10;
    m["banana"] = 20;
    m["orange"] = 30;
    cout << "Price of apple: " << m["apple"] << endl;
    cout << "Price of banana: " << m["banana"] << endl;
    cout << "Price of orange: " << m["orange"] << endl;
    return 0;
}

//vector 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Elements of vector: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

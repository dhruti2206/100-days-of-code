//pair program
#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<int,string> p;
    cout<<"Enter the age and name: ";
    cin>>p.first>>p.second;
    cout<<"Age: "<<p.first<<endl;
    cout<<"Name: "<<p.second<<endl;
    return 0;
}

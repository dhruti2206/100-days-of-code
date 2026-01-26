//pointer basics
#include<iostream>
using namespace std;
int main(){
    int var=30;
    int *ptr; //pointer declaration
    ptr=&var; //pointer initialization

    cout<<"Value of var: "<<var<<endl;
    cout<<"Address of var: "<<&var<<endl;
    cout<<"Value of ptr (Address of var): "<<ptr<<endl;
    cout<<"Value pointed by ptr: "<<*ptr<<endl;

    //Modifying value using pointer
    *ptr=50;
    cout<<"New value of var after modifying through pointer: "<<var<<endl;

    return 0;
}

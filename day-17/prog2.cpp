//copy string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char source[100], destination[100];
    cout<<"enter source string: ";
    cin.getline(source, 100);
    strcpy(destination, source);
    cout<<"source string: "<<source<<endl;
    cout<<"destination string: "<<destination<<endl;
    return 0;
}

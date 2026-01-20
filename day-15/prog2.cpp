//reverse a string
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    cin>>str;
    int n=0;
    for(int i=0;str[i]!='\0';i++){
        n++;
    }
    for(int i=0;i<n/2;i++){
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    cout<<"reversed string is: "<<str<<endl;
    return 0;
}

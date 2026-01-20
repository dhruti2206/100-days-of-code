//string lenght without lenght()
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"length of the string is: "<<count<<endl;
    return 0;
}

//compare two strings
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100], str2[100];
    cout<<"enter first string: ";
    cin.getline(str1, 100);
    cout<<"enter second string: ";
    cin.getline(str2, 100);
    int result = strcmp(str1, str2);
    if(result == 0){
        cout<<"strings are equal"<<endl;
    }
    else if(result < 0){
        cout<<"first string is less than second string"<<endl;
    }
    else{
        cout<<"first string is greater than second string"<<endl;
    }
    return 0;
}

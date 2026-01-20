//palindrome string
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
    bool isPalindrome=true;
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1]){
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"the string is a palindrome"<<endl;
    }
    else{
        cout<<"the string is not a palindrome"<<endl;
    }
    return 0;
}

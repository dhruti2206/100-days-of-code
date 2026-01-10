//palindrome number
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem,temp;
    cout<<"enter a number: ";
    cin>>n;
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        cout<<"the number is a palindrome";
    }
    else{
        cout<<"the number is not a palindrome";
    }
    return 0;
}

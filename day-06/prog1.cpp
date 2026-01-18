//reverse a number
#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<"enter a nunmber: ";
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"reversed number is: "<<rev;
    return 0;
}

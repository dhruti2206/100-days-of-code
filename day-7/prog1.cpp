//prime number check
#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter a number: ";
    cin>>n;
    if(n<=1){
        flag=1;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"the number is prime";
    }
    else{
        cout<<"the number is not prime";
    }
    return 0;
}


//count digits in a number
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<"number of digits is: "<<count<<endl;
    return 0;
}

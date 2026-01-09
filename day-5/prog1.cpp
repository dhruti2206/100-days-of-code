//factorial of a number using loop
#include<iostream>
using namespace std;
int main(){
    int n;
    long fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        fact=fact*(i+1);
    }
    cout<<"factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}

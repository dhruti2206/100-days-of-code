//recursion factorial
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int factorial(int n);{
        if(n<=1)
            return 1;
        else
            return n*factorial(n-1);
    }
    cout<<"Factorial of "<<n<<" = "<<factorial(n)<<endl;
    return 0;
}

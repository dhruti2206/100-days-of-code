//recursion fibonicci
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int fibonacci(int n);{
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else
            return fibonacci(n-1)+fibonacci(n-2);
    }
    cout<<"Fibonacci of "<<n<<" = "<<fibonacci(n)<<endl;
    return 0;
}

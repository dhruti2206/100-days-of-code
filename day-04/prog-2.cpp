//multiplication table
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"multiplication table of "<<n<<" is: "<<endl;
    for (int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}

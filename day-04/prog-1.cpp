//sum of first n numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n nnumber: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of first"<<n<<"numbers is:"<<sum<<endl;
    return 0;
}

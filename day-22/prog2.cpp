//pointer to array
#include<iostream>
using namespace std;
int main(){
    int arr[]={12,30,25,9,76};
    int *ptr=arr; 

    cout<<"Array elements using pointer arithmetic: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"Element "<<i<<": "<<*(ptr + i)<<endl; 
    }

    return 0;
}

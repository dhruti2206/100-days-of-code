//reverse an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"reversed array is: ";
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

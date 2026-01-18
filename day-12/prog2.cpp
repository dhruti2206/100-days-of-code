//count even / odd elements in array
#include<iostream>
using namespace std;
int main(){
    int n, ecount=0,ocount=0;
    cout<<"enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            ecount++;
        }
        else{
            ocount++;
        }
    }
    cout<<"number of even elements: "<<ecount<<endl;
    cout<<"number of odd elements: "<<ocount<<endl;
    return 0;
}

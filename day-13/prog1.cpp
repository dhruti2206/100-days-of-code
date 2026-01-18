//search element in array
#include<iostream>
using namespace std;
int main(){
    int n,key,flag=0;
    cout<<"enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter elements to be searched: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at index "<<i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"element not found"<<endl;
    }
    return 0;
}

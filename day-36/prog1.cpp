//sort strings using insertion sort
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;
    string arr[n];
    cout<<"Enter the strings: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        string key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted strings: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

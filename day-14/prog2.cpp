//remove duplicates
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
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++){
        bool isDuplicate=false;
        for(int k=0;k<j;k++){
            if(arr[i]==temp[k]){
                isDuplicate=true;
                break;
            }
        }
        if(!isDuplicate){
            temp[j]=arr[i];
            j++;
        }
    }
    cout<<"array after removing duplicates: ";
    for(int i=0;i<j;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}

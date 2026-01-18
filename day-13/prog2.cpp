//count frequency
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
    cout<<"frequency of elements is: "<<endl;
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
            cout<<arr[i]<<" occurs "<<count<<" times"<<endl;
        }
    }
    return 0;
}

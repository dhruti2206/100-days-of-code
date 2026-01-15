//sum and avg of array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    double avg=(double)sum/n;
    cout<<"Sum of elements is: "<<sum<<endl;
    cout<<"Average of elements is: "<<avg<<endl;
    return 0;
}

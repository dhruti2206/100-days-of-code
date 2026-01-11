//print prime numbers in a range
#include<iostream>
using  namespace std;
int main(){
    int lower,upper,flag;
    cout<<"enter lower and upper range: ";
    cin>>lower>>upper;
    cout<<"prime numbers between "<<lower<<" and "<<upper<<" are: "<<endl;
    for(int num=lower;num<=upper;num++){
        if(num<=1){
            continue;
        }
        flag=0;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<num<<endl;
        }
    }    
    return 0;
}

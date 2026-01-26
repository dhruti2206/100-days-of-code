//call by value vs call by reference
#include<iostream>
using namespace std;
void callbyvalue(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void callbyreference(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10;
    int y=20;
    cout<<"Before swap: "<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;

    callbyvalue(x,y);
    cout<<"After call by value swap: "<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;

    callbyreference(x,y);
    cout<<"After call by reference swap: "<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;

    return 0;
}

//menu diven program
#include <iostream>
using namespace std;
void add(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum: "<<a+b<<endl;
}
void subtract(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Difference: "<<a-b<<endl;
}
void multiply(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Product: "<<a*b<<endl;
}
void divide(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(b!=0)
        cout<<"Quotient: "<<a/b<<endl;
    else
        cout<<"Cannot divide by zero!"<<endl;
}
int main(){
    int choice;
    do{
        cout<<"Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: divide(); break;
            case 5: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice! Try again.\n";
        }
    }while(choice!=5);
    return 0;
}

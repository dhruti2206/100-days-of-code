//modular programming 
#include<iostream>
using namespace std;
void greet(){
    cout<<"Welcome to Modular Programming in C++!"<<endl;
}
void displayMenu(){
    cout<<"Menu:\n1. Greet\n2. Exit\nEnter your choice: ";
}
int main(){
    int choice;
    do{
        displayMenu();
        cin>>choice;
        switch(choice){
            case 1: greet(); break;
            case 2: cout<<"Exiting..\n"; break;
            default: cout<<"Invalid choice! Try again.\n";
        }
    }while(choice!=2);
    return 0;
}

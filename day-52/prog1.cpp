//stack implementation
#include<iostream>
using namespace std;
int main(){
    const int MAX = 100;
    int stack[MAX];
    int top = -1;
    //push operation
    auto push = [&](int val) {
        if (top < MAX - 1) {
            stack[++top] = val;
        } else {
            cout << "Stack overflow!" << endl;
        }
    };
    //pop operation
    auto pop = [&]() {
        if (top >= 0) {
            return stack[top--];
        } else {
            cout << "Stack underflow!" << endl;
            return -1; //stack is empty
        }
    };
    //push some values
    push(10);
    push(20);
    push(30);
    cout << "Popped value: " << pop() << endl; //30
    cout << "Popped value: " << pop() << endl; //20
    cout << "Popped value: " << pop() << endl; //10
    cout << "Popped value: " << pop() << endl; //stack underflow
    return 0;
}

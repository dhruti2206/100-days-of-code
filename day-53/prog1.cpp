//stack reverse
#include<iostream>
using namespace std;
void reverseStack(int stack[], int& top) {
    if (top < 0) return; //stack is empty
    int temp = stack[top--]; //pop the top element
    reverseStack(stack, top); //reverse the remaining stack
    stack[++top] = temp; //push the popped element back
}
int main() {
    const int MAX = 100;
    int stack[MAX];
    int top = -1;
    //push some values
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    cout << "Original Stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
    reverseStack(stack, top);
    cout << "Reversed Stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
    return 0;
}

//infix to postfix conversion
#include<iostream>
#include<string>
using namespace std;
char st[100];
int top = -1;
void push(char x) {
    st[++top] = x;
}
char pop() {
    if(top == -1) return -1;
    return st[top--];
}
// The "Judge" Function (Precedence)
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}
// Returns 1 if character is A-Z, a-z, or 0-9
int is_operand(char c) {
    if ((c >= 'A' && c <= 'Z') || 
        (c >= 'a' && c <= 'z') || 
        (c >= '0' && c <= '9')) {
        return 1;
    }
    return 0;
}
int main() {
    char exp[100]; 
    printf("Enter Infix Expression: ");
    scanf("%s", exp);
    char *e = exp; //traverse the string
    char x;
    printf("Postfix: ");
    // Loop until we hit the null terminator '\0'
    while(*e != '\0') {  
        // CASE 1: Operand 
        if(is_operand(*e)) {
            printf("%c", *e);
        }
        // CASE 2: Open Bracket '('
        else if(*e == '(') {
            push(*e);
        }
        // CASE 3: Close Bracket ')'
        else if(*e == ')') {
            while((x = pop()) != '(') {
                printf("%c", x);
            }
        }
        // CASE 4: Operator (+, -, *, /)
        else {
            while(top != -1 && precedence(st[top]) >= precedence(*e)) {
                printf("%c", pop());
            }
            push(*e);
        }
        e++; // Move pointer to next char
    }
    // CASE 5: Empty the remaining stack
    while(top != -1) {
        printf("%c", pop());
    }
    printf("\n");
    return 0;
}

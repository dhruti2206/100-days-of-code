//stack using two queues
#include <iostream>
#include <queue>
using namespace std;
class StackUsingQueues {
    queue<int> q1, q2;
public:
    // Push element onto stack
    void push(int x) {
        // Push q2
        q2.push(x);
        // move elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);//swap q1 and q2
    }
    //Remove top element
    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        q1.pop();
    }
    // Get top element
    int top() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q1.front();
    }
    // Check if stack is empty
    bool empty() {
        return q1.empty();
    }
};
int main() {
    StackUsingQueues s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << endl; // 30
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // 20
    return 0;
}

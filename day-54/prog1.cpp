//queue implementation
#include<iostream>
using namespace std;
int main() {
    const int MAX = 100;
    int queue[MAX];
    int front = -1, rear = -1;
    //enqueue operation
    auto enqueue = [&](int val) {
        if (rear < MAX - 1) {
            if (front == -1) front = 0; //first element
            queue[++rear] = val;
        } else {
            cout << "Queue overflow!" << endl;
        }
    };
    //dequeue operation
    auto dequeue = [&]() {
        if (front >= 0 && front <= rear) {
            return queue[front++]; //return front element and move front
        } else {
            cout << "Queue underflow!" << endl;
            return -1; //queue is empty
        }
    };
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << "Dequeued value: " << dequeue() << endl; //10
    cout << "Dequeued value: " << dequeue() << endl; //20
    cout << "Dequeued value: " << dequeue() << endl; //30
    cout << "Dequeued value: " << dequeue() << endl; //queue underflow
    return 0;
}

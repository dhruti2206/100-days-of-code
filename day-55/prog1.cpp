//circular queue
#include<iostream>
using namespace std;    
int main() {
    const int MAX = 100;
    int queue[MAX];
    int front = -1, rear = -1;
    //enqueue operation
    auto enqueue = [&](int val) {
        if ((rear + 1) % MAX == front) {
            cout << "Queue overflow!" << endl; //queue is full
        } else {
            if (front == -1) front = 0; //first element
            rear = (rear + 1) % MAX; //move rear circularly
            queue[rear] = val;
        }
    };
    //dequeue operation
    auto dequeue = [&]() {
        if (front == -1) {
            cout << "Queue underflow!" << endl; //queue is empty
            return -1;
        } else {
            int val = queue[front];
            if (front == rear) { //one element
                front = rear = -1; //reset queue
            } else {
                front = (front + 1) % MAX; //move front circularly
            }
            return val;
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

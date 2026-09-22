#include <iostream>
using namespace std;
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue(int x) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow! Cannot enqueue " << x << endl;
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = x;
    cout << "Enqueued: " << x << endl;
}
int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! Cannot dequeue." << endl;
        return -1;
    }
    cout << "Dequeued: " << queue[front] << endl;
    return queue[front++];
}void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue contents: ";
    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}

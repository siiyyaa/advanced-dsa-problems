#include <iostream>
using namespace std;

const int SIZE = 5;  
int arr[SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % SIZE == front) {
        cout << "Overflow! Circular Queue is full.\n";
        return;
    }
    if (front == -1) { 
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }
    arr[rear] = x;
    cout << "Enqueued: " << x << "\n";
}
void dequeue() {
    if (front == -1) {
        cout << "Underflow! Circular Queue is empty.\n";
        return;
    }
    cout << "Dequeued: " << arr[front] << "\n";
    if (front == rear) {
        front = rear = -1; 
    } else {
        front = (front + 1) % SIZE;
    }
}
void display() {
    if (front == -1) {
        cout << "Circular Queue is empty.\n";
        return;
    }
    cout << "Circular Queue state: ";
    int i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << "\n";
}
int main() {
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6); 
    display();
    dequeue();
    dequeue();
    enqueue(7);
    enqueue(8);
    display();
    enqueue(9);
    enqueue(10);
    display();

    return 0;
}

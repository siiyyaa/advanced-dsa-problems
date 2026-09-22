#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    int priority;
    Node* next;

    Node(int d, int p) {
        data = d;
        priority = p;
        next = nullptr;
    }
};

class PriortyQ{
    Node* front = nullptr;

public:
    // Insert with priority
    void push(int d, int p) {
        Node* newNode = new Node(d, p);

        // If q has higher priority than front
        if (!front || p > front->priority) {
            newNode->next = front;
            front = newNode;
        } else {
            Node* temp = front;
            while (temp->next && temp->next->priority >= p) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Remove highest priority element
    void pop() {
        if (!front) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }  

    // Display queue
    void display() {
        if (!front) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        while (temp) {
            cout << temp->data << " priority : " << temp->priority << "\n";
            temp = temp->next;
        }
        cout << "\n";
    }
}; 

int main() {
    PriortyQ pq;
    pq.push(10, 2);
    pq.push(20, 1);
    pq.push(30, 3);
    pq.push(40, 2);

    cout << "Priority Queue: ";
    pq.display();

   

    pq.pop();
    cout << "After pop: ";
    pq.display();

    return 0;
}
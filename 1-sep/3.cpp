#include<bits/stdc++.h>
using namespace std;

// from ll to circular queue 
class Node {
    public:
    int v;
    Node* next;
    Node(int val) {
        v = val;
        next = nullptr;
    }
};

class Queue {
    public:
    Node* rear = nullptr;

    void push(int x){
         Node* temp = new Node(x);
        if (rear == nullptr) {
            rear = temp;
            rear->next = rear; 
        } else {
            temp->next = rear->next;
            rear->next = temp;
            rear = temp;
        }
    }

    void pop(){
        if(!rear) return;
        Node*front = rear->next;
        if(rear == front) rear = nullptr;
        else rear->next = front->next;
        delete front;
    }
    void display() {
        if (!rear) {
            cout << "queue is empty\n";
            return;
        }
        Node* temp = rear->next;
        while (temp != rear) {
            cout << temp->v << " ";
            temp = temp->next;
        }
        cout << temp->v << "\n";
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.display();
    return 0;
}
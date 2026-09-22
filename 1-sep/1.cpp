#include <bits/stdc++.h>
using namespace std;

// using doubly linked list
class Node {
public:
    int v;
    Node* prev;
    Node* next;

    Node(int val) {
        v = val;
        prev = nullptr;
        next = nullptr;
    }
};

class Deque {
    Node* front = nullptr;
    Node* rear = nullptr;

public:
    // Insert sfront
    void insertf(int val) {
        Node* newNode = new Node(val);
        if (!front) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Insert at end
    void insertr(int val) {
        Node* newNode = new Node(val);
        if (!rear) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    // Delete from front
    void deletef() {
        if (!front) {
            cout << "deque is empty\n";
            return;
        }
        Node* temp = front;
        if (front == rear) {
            front = rear = nullptr;
        } else {
            front = front->next;
            front->prev = nullptr;
        }
        delete temp;
    }

    // Delete from end
    void deleter() {
        if (!rear) {
            cout << "deque is empty\n";
            return;
        }
        Node* temp = rear;
        if (front == rear) {
            front = rear = nullptr;
        } else {
            rear = rear->prev;
            rear->next = nullptr;
        }
        delete temp;
    }

    // Display deque
    void display() {
        if (!front) {
            cout << "deque is empty\n";
            return;
        }
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->v << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    Deque d;
    d.insertf(10);
    d.insertf(20);
    d.insertf(30);
    d.insertr(50);
    d.insertr(60);
    cout<<"after the insertion : ";
    d.display();
    d.deletef();
    d.deleter();
    cout<<"after the deletion : ";
    d.display();
    return 0;
}
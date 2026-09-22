#include <bits/stdc++.h>
using namespace std;

#define MAX 100
int arr[MAX];
int top = -1;
void push(int x) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot push " << x << endl;
        return;
    }
    arr[++top] = x;
    cout << "Pushed: " << x << endl;
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop." << endl;
        return -1;
    }
    cout << "Popped: " << arr[top] << endl;
    return arr[top--];
}
void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack contents: ";
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}
string infixToPostfix(string infix) {
    stack<char> st;
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int evaluatePostfix(string postfix) {
    stack<int> st;

    for (char c : postfix) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
                case '^': st.push(pow(val1, val2)); break;
            }
        }
    }
    return st.top();
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();

    string infix;
    cout << "\nEnter an infix expression (digits only): ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;

    cout << "Evaluated Result: " << evaluatePostfix(postfix) << endl;

    return 0;
}

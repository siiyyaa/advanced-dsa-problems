#include <bits/stdc++.h>
using namespace std;

char stk[100];
int top = -1;

// Push function
void push(char ch)
{
    stk[++top] = ch;
}

// Pop function
void pop()
{
    top--;
}

// Peek function
char peek()
{
    return stk[top];
}

// Function to return precedence
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main()
{
    string infix, postfix = "";

    cout << "Enter the infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        // If operand
        if (isalnum(ch))
        {
            postfix += ch;
        }

        // If opening bracket
        else if (ch == '(')
        {
            push(ch);
        }

        // If closing bracket
        else if (ch == ')')
        {
            while (top != -1 && peek() != '(')
            {
                postfix += peek();
                pop();
            }

            if (top != -1)
                pop(); // Remove '('
        }

        // If operator
        else
        {
            while (top != -1 && precedence(peek()) >= precedence(ch))
            {
                postfix += peek();
                pop();
            }

            push(ch);
        }
    }

    // Pop remaining operators
    while (top != -1)
    {
        postfix += peek();
        pop();
    }

    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}
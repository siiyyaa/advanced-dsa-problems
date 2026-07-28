#include <iostream>
using namespace std;

char Stk[100];
int top = -1;

void push(char x) {
    if (top == 99)
        cout << "Stack Overflow";
    else{
        top=top+1;
        Stk[top] = x;
    }
}

void pop() {
    if (top != -1)
        top--;
}

void display() {
    while (top != -1) {
        cout << Stk[top];
        pop();
    }
}

int main() {
    int n, base, rem;

    cout << "Enter decimal number: ";
    cin >> n;

    cout << "Enter base (2 to 16): ";
    cin >> base;

    if (base < 2 || base > 16) {
        cout << "Invalid Base!";
        return 0;
    }

    if (n == 0) {
        cout << "Result = 0";
        return 0;
    }
    if(base<10){

        while (n > 0) {
        rem = n % base;
        push(rem+'0');
        n=n/base;
    }
}
else if(base>10){
    while(n > 0){

        rem = n % base;

        if(rem <= 9){
            push(rem + '0');
          }

        else{
            push(rem - 10 + 'A');
        }
        n = n / base;
    }

}

        


    cout << "Number in base " << base << " = ";
    display();

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

char revStk[100];
int top = -1;

void push(char x){
    if(top == 99){
        cout << "Overflow";
    }
    else{
        top=top+1;
        revStk[top] = x;
    }
}

void pop(){
    if(top != -1){
        top--;
    }
}

void display(){
    while(top != -1){
        cout << revStk[top];
        pop();
    }
}

int main(){

    string S;

    cout << "Enter the string: ";
    cin >> S;

    for(int i = 0; i < S.length(); i++){
        push(S[i]);
    }

    cout << "Reversed string: ";
    display();

    return 0;
}
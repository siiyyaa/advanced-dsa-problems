#include<iostream>
#include<string>
#include<cctype>
using namespace std;

char stk[100];
int top = -1;
string Rev, Res;

void push(char x){
    if(top == 99){
        cout << "Stack Overflow" << endl;
    }
    else{
        stk[++top] = x;
    }
}

void pop(){
    if(top == -1){
        cout << "Stack Underflow" << endl;
    }
    else{
        top--;
    }
}

void display(){
    for(int i = top; i >= 0; i--){
        cout << stk[i];
    }
    cout << endl;
}

void ispalindrome(){
    Rev = "";
    Res = "";

    // Reverse string from stack
    for(int i = top; i >= 0; i--){
        Rev += stk[i];
    }

    // Original string from stack
    for(int i = 0; i <= top; i++){
        Res += stk[i];
    }

    if(Rev == Res){
        cout << "Given string is a Palindrome";
    }
    else{
        cout << "Given string is NOT a Palindrome";
    }
}

int main(){

    string S;

    cout << "Enter a string: ";
    getline(cin, S);

    // Push only alphabetic characters
    for(char x : S){
        if(isalpha(x)){
            push(tolower(x));   // Convert to lowercase
        }
    }

    cout << "Reversed String: ";
    display();

    ispalindrome();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

char stk[100];
int top=-1;
string postfix="";
void peek(){
     if(top==-1){
          cout<<"Stack is empty"<<endl;
     }
     else{
     cout<<stk[top]<<endl;
     }
}
void push(char x){
     if(top==99){
          cout<<"OVERFLOW"<<endl;
     }
     else{
          top=top+1;
          stk[top]=x;
     }
}
void pop(){
     if(top<0){
          cout<<"UNDERFLOW"<<endl;
     }
     else{
          top=top-1;
     }
}
int main( ){
    
     string infix;
     cout<<"Enter the infix expression: ";
     cin>>infix;

     for (int i=0;i<infix.length();i++){
          if (isalnum(infix[i])){
               postfix+=infix[i];
          }
          else if (infix[i]==')'){
               while (stk[top]!='('){
                    postfix+=stk[top];
                    pop();
               }
               pop();
          }
          else{
               push(infix[i]);
          }
     }
     while(top!=-1){
          postfix+=stk[top];
               pop();
     }
     
      

     cout<<"The postfix expression is: ";
     cout<<postfix<<endl;

     return 0;
}
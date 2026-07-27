#include<iostream>
using namespace std;
     
int S[100];
int top=-1;

void peek(){
     if(top==-1){
          cout<<"Stack is empty"<<endl;
     }
     else{
     cout<<S[top]<<endl;
     }
}
void push(char x){
     if(top==99){
          cout<<"OVERFLOW"<<endl;
     }
     else{
          top=top+1;
          S[top]=x;
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
void display(){
     for(int i=top;i>=0;i--){
          cout<<S[i]<<endl;
     }
}
int main(){
     cout<<"Stack Operations"<<endl;
     cout<<"----------------"<<endl;
     int choice;
     cout<<"1. Push"<<endl;
     cout<<"2. Pop"<<endl;
     cout<<"3. Peek"<<endl;
     cout<<"4. Display"<<endl;
     cout<<"Enter your choice: ";
     cin>>choice;
     if(choice==1){
          char x;
          cout<<"Enter the element to be inserted: ";
          cin>>x;
          push(x);
     }
     else if(choice==2){
          pop();
     }
     else if(choice==3){
          peek();
     }
     else if(choice==4){
          display();
     }
     /*
     push(10);
     push(5);
     push(11);
     pop();
     peek();
     pop();
     push(50);
     push(97);
     peek();
     pop();*/

     return 0;
}    
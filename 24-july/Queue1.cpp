#include<iostream>
using namespace std;
int Q[100];
int R=0;
int F=0;

void ENQUEUE(int x){
          Q[R]=x;
          R=R+1;
     }

void DEQUEUE(){
     if(F==R){
          cout<<"Empty"<<endl;
     }
     else{
          F=F+1;
     }
}

void isEmpty(){
     if(F==R){
          cout<<"Empty"<<endl;
     }
     else{
          cout<<"Not Empty"<<endl;
          int size=R-F;
          cout<<"Size: "<<size<<endl;
     }
}

void Display(){
     if(F==R){
          cout<<"Empty"<<endl;
     }
     else{
          for(int i=F;i<R;i++){
               cout<<Q[i]<<" ";
          }
          cout<<endl;
     }
}

void PEEK(){
     if(F==R){
          cout<<"Empty"<<endl;
     }
     else{
          cout<<Q[F]<<endl;
     }
}

int main(){  
/*   ENQUEUE(10);
     ENQUEUE(20);
     ENQUEUE(30);
     PEEK();
     Display();
     DEQUEUE();
     Display();
     DEQUEUE();
     DEQUEUE();
     Display();
     isEmpty();
     PEEK();
*/ 
     cout<<"Queue Operations"<<endl;
     cout<<"1. ENQUEUE"<<endl;
     cout<<"2. DEQUEUE"<<endl;
     cout<<"3. PEEK"<<endl;
     cout<<"4. Display"<<endl;
     cout<<"5. isEmpty"<<endl;
     cout<<"6. Exit"<<endl;
     
     int choice;
     cout<<"Enter your choice: ";
     cin>>choice;
     if(choice==1){
          int x;
          cout<<"Enter the element to be inserted: ";
          cin>>x;
          ENQUEUE(x);
     }
     else if(choice==2){
          DEQUEUE();
     }
     else if(choice==3){
          PEEK();
     }
     else if(choice==4){
          Display();
     }
     else if(choice==5){
          isEmpty();
     }
     else if(choice==6){
          cout<<"Exiting..."<<endl;
          return 0;
     }
     else{
          cout<<"Invalid choice"<<endl;
     }
    
     return 0;
}
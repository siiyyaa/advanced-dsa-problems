#include<iostream>
using namespace std;

int Q[100], front=0, rear=-1;
void display(){
     for(int i=front; i<=rear; i++){
         cout<<Q[i]<<" ";
     }
     cout << endl;
}
int dequeue(){
    if(front > rear) {
        cout << "Queue is Underflow!" << endl;
        return -1;
    }
    int x = Q[front];
    front++;
    return x;
}
 
void enqueue( int x){
    if(rear == 99) {
        cout << "Queue is Overflow!" << endl;
        return;
    }
    rear++;
    Q[rear] = x;
}
void EmptyQueue(){
    if(rear-front+1==0){
        cout<<"Queue is Empty!"<<endl;
    }
    else{
        cout<<"Queue is not Empty!"<<endl;
    }
}
int main(){
    int choice, x;
    do{
        cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.EmptyQueue\n5.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the element to be inserted:";
                cin>>x;
                enqueue(x);
                break;
            case 2:
                x=dequeue();
                if(x!=-1)
                    cout<<"Deleted element is:"<<x<<endl;
                break;
            case 3:
                display();
                break;
            case 4:
                EmptyQueue();
                break;
            case 5:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
    }while(choice!=5);
    return 0;
}
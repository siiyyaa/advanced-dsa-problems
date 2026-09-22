#include<iostream>
using namespace std;

void insert(int Queue[],int Front,int Rear,int Size){

    if((Front-1+Size)%Size==Rear){
        cout<<"Queue is full";
    }
    else{
        cout<<"Enter the element to be inserted: ";
        cin>>Queue[Front];
        Front=(Front-1+Size)%Size;
    }
}

int main() {
    int Front,Rear,Size;
    cout<<"Enter the size of the queue: ";
    cin>>Size;
    int Queue[Size];
    Front=Rear=Size-1;
    insert(Queue,Front,Rear,Size);
    insert(Queue,Front,Rear,Size);
    insert(Queue,Front,Rear,Size);
    insert(Queue,Front,Rear,Size);
    insert(Queue,Front,Rear,Size);
    insert(Queue,Front,Rear,Size);

    


    return 0;
}
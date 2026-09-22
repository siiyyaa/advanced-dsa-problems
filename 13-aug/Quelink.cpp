#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* front=NULL;
Node* rear=NULL;

void q_insert(int x){   
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(rear==NULL){
        front=temp;
        rear=temp;
    }else{
        rear->next=temp;
        rear=temp;
    }       
}

void q_delete(){   
    if(front==NULL){
        cout<<"Underflow"<<endl;
    }else{
        Node* temp=front;
        front=front->next;
        delete(temp);
    }    
}

void display(){   
    if(front==NULL){
        cout<<"Underflow"<<endl;
    }else{
        Node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    cout<<endl;
}

int main(){
    q_insert(10);
    q_insert(11);
    q_insert(12);
    q_insert(13);   
    display();

    cout<<endl;
    
    q_delete();
    q_delete();
    display();
    q_delete();
    display();
    q_delete();
    display();
}
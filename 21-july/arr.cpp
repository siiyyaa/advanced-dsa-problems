#include<iostream>
using namespace std;

int arr[50];
int size;
void read(){
      int n;
     cout<<"Enter the size of array: ";
     cin>>n;
     cout<<"Enter the elements of array: ";
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     size=n;
}
void insertion(int x,int pos){
     for(int i=size;i>=pos;i--){
          arr[i+1]=arr[i];
     }
     arr[pos]=x;
     size++;
}
void deletion(int pos){
     for(int i=pos;i<size;i++){
          arr[i]=arr[i+1];
     }
     size--;
}
void display(){
     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main(){cout<<"Array Operations"<<endl;
     cout<<"----------------"<<endl;
     cout<<"1. Insertion"<<endl;
     cout<<"2. Deletion"<<endl;
     int choice;
     cout<<"Enter your choice: ";
     cin>>choice;
     if(choice==1){
          cout<<"Insertion Operation"<<endl;
          int pos,x;
          read();
          display();
          cout<<"Enter the position to insert: ";
          cin>>pos;
          cout<<"Enter the element to insert: ";
          cin>>x;
          insertion(x,pos);
          cout<<"After Insertion: ";
          display();
     }
     else if(choice==2){
          cout<<"Deletion Operation"<<endl;
          int pos;
          read();
          display();
          cout<<"Enter the position to delete: ";
          cin>>pos;
          deletion(pos);
          cout<<"After Deletion: ";
          display();
     }
     else{
          cout<<"Invalid Choice"<<endl;
          return 0;
     }
    /* int pos,x;
     read();
     display();
     cout<<"Enter the position to insert: ";
     cin>>pos;
     cout<<"Enter the element to insert: ";
     cin>>x;
     insertion(x,pos);
     display();
     cout<<"Enter the position to delete: ";
     cin>>pos;
     deletion(pos);
     display();*/
     return 0;
}
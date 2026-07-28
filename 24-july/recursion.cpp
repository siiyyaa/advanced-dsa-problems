#include<iostream>
using namespace std;

int sumN(int n){
    if(n==0)
        return 0;
    else
        return n + sumN(n-1);
}

int fun(int n){
     if(n==0){
          return 0;
     }
     else{
          return (n % 10) + fun(n / 10);
     }
}

int GCD(int a, int b){
     int R = a % b;
     if(R==0){
          return b;
     }
     else{
          return GCD(b, R);
     }
}

int LCM(int a, int b){
     if(GCD(a,b)==1){
          return a*b;
     }
     else{
          return (a*b)/GCD(a,b);
     }
}

 
int Rev(int x){
     if(x==0){
          return 0;
     }
     else{
          cout<<x%10;
          return Rev(x/10);
     }
}

int main(){
     cout<<"__MENU DRIVEN PROGRAM__"<<endl;
     cout<<"1. Sum of first n natural numbers"<<endl;
     cout<<"2. Sum of digits of a number"<<endl;
     cout<<"3. LCM and GCD of two numbers"<<endl;
     cout<<"4. Reverse of a number"<<endl;
     cout<<"5. Exit"<<endl;
     int choice;
     cout<<"Enter your choice: ";
     cin>>choice;
     switch(choice){
          case 1:
               int n;
               cout<<"Enter a number to find sum of first n natural numbers: ";
               cin>>n;
               cout<<"Sum of first "<<n<<" natural numbers is: "<<sumN(n)<<endl;
               break;
          case 2:
               int num;
               cout<<"Enter a number to find sum of digits: ";
               cin>>num;
               cout<<"Sum of digits of "<<num<<" is: "<<fun(num)<<endl;
               break;
          case 3:
               int a, b;
               cout<<"Enter two numbers: ";
               cin>>a>>b;
               cout<<"LCM of "<<a<<" and "<<b<<" is: "<<LCM(a,b)<<endl;
               cout<<"GCD of "<<a<<" and "<<b<<" is: "<<GCD(a,b)<<endl;
               break;
          case 4:
               int x;
               cout<<"Enter a number to reverse: ";
               cin>>x;
               cout<<"Reverse of "<<x<<" is: ";
               cout<<Rev(x)<<endl;
               break;
          case 5:
               cout<<"Exiting the program."<<endl;
               break;
          default:
               cout<<"Invalid choice. Please try again."<<endl;
               break;
     }
     
     return 0;
}
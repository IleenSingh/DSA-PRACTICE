#include<iostream>
using namespace std;

int main(){
   
    int a =10 ;
    int *p =&a ;
    int *q =p ;
   cout<<"p : "<< p<<endl;
   cout<<"*p : "<<*p<<endl;
   cout<<"*q : "<<*q<<endl;
   cout<<"q :"<<p <<endl;
   
}
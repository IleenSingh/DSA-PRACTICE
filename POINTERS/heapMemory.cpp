#include<iostream>
using namespace std;

int main(){
    // heap memory allocation
    int *p =new int;
    *p =100;
    cout<<*p<<endl;
    //deallocation
    delete p;
    cout<<*p;
}
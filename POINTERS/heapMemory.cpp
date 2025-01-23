#include<iostream>
using namespace std;

int main(){
    // // heap memory allocation
    // int *p =new int;
    // *p =100;
    // cout<<*p<<endl;
    // //deallocation
    // delete p;
    // cout<<*p;

    //creating a array using a heap memory
    int *arr = new int[10];
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;
}
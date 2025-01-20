#include<iostream>
using namespace std;

int main(){
    //pointer with array
    int arr[] ={10,20,30,40,50};
    //declaration of array wrt pointer
    int* ptr = arr;
    cout<<"ptr :"<<ptr<<endl;
    cout<<"arr : "<<arr<<endl;
    cout<<"arr= *arr+1 : "<<*arr+1<<endl;
    cout<<"arr= *(arr+1) : "<<*(arr+1)<<endl;

}
#include<iostream>
using namespace std;

void printAllOdd (int arr[] ,int n ,int index){
    // base case -> jab saare arrAy pe traverse krrle tbb rukhna hai 
    if(index ==n){
        return;
    }

    //1 case -> & operator se odd pata krrlenge 
    if((arr[index])&1){
        cout<<arr[index]<<" ";
    }
    //recursion part -> increment krte jaega index ko 
    printAllOdd(arr , n ,index+1);

}

int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int n= 10;
    int index =0 ;
    printAllOdd(arr , n ,index);
}
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
#include<iostream>
using namespace std;

void printAllEven (int arr[] ,int n ,int index){
    // base case -> jab saare arrAy pe traverse krrle tbb rukhna hai 
    if(index ==n){
        return;
    }

    //1 case -> & operator se odd pata krrlenge 
    if(((arr[index])&1 )== 0){ //not laga denge uske samne toh bhhi even aajaega rather than o h ki ni dekhne ki jagah
        cout<<arr[index]<<" ";
    }
    //recursion part -> increment krte jaega index ko 
    printAllEven(arr , n ,index+1);

}

int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int n= 10;
    int index =0 ;
    printAllEven(arr , n ,index);
}
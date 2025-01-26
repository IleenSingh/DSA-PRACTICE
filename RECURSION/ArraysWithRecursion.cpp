#include<iostream>
using namespace std;

void printArray(int arr[] ,int size ,int index){
    //base case -> apan ko saare element print krne hai means jab array khtm hoga tab rukk jana h mtlb nth index pe kyuki array n-1 chlta hai
    if(index == size){
        return;
    }

    //recursive relation
    //1 case jo mai solve krungi zeroth index
    cout<<arr[index]<<" ";
    //recursion part jo woh saare elements ko recusively call krke print krega
    printArray(arr ,size ,index+1);
    //index ko increment krrdiya kyuki oth print hoga mere case se phir index incremet krke print krega
     

}


int main(){
    int arr[] = {100 , 200 , 300 ,400 ,500 ,600 ,3456};
    int size =7 ;
    //index bhi intialise krrdungi zero means yeh mera case solve krrdenga zeroth index ko print krne ka baki ka recursion implement krega 
    int index = 0 ;
    printArray(arr , size , index);
}
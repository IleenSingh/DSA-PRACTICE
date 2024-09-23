#include<iostream>
using namespace std;

int reverseArray(int arr[] ,int size){
    int low=0;
    int high=size-1;
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}


int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int ans =reverseArray(arr,n);
    cout<<"The reverse of the array is ";
    
    //array k har element ko print krane k liye loop lgta h 

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
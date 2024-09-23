//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include<iostream>
using namespace std;

int singleNumber(int arr[] ,int n){
    int ans=0;
    for(int i=0 ;i<n ;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}
int main(){
    int arr[5]={1,1,2,5,5};
    int n=5;
    int ans=singleNumber(arr,n);
}
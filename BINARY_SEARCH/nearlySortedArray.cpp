
// Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
// Output: 2
// Explanation: Output is index of 40 in given array i.e. 2

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
// Output: -1
// Explanation: -1 is returned to indicate the element is not present


#include<iostream>
#include<vector>
using namespace std;

int binarySearchWithTwist(vector<int>&arr ,int n ,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    //mid 3 jagah ho skta h toh like B.S apn ans tin mid mai milega (mid,mid+1or mid-1)
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid-1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            s=mid+2;
        }
        else{
            //target<arr[mid]
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

 int main(){
    vector<int> arr = {10,3,40,20,50,80,70};
    int n= arr.size();
    int target=80;
    int ans = binarySearchWithTwist(arr,n,target);
    cout<<"Return the answer index "<<ans;
 }

 
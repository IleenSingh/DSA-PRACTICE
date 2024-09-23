#include<iostream>
#include<vector>
using namespace std;

//finding pivot so we can apply binary search in both the sorted array 
int pivotIndex(vector<int>&arr){
    int s=0;
    int n=arr.size();
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        //for exception case (when their is only one element present in the array)
        if(s==e){
            return s;//or e
        }
        if(mid < n-1 && arr[mid]>arr[mid+1]){
           return mid;
        }
        if(mid>0 && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        //if mid is in line B means than s should be greater than mid
        if(arr[s]>arr[mid]){
            //means we have to move mid on the left side of the array
            e=mid-1;
        }
        else{
            //right
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
   return -1;
}

//binary search to apply in both lines
int binarySearch(int s,int e,int target,vector<int>&arr){
    int  mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
       if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
   return -1;
}

int search(vector<int>&nums ,int target){
    int pivot=pivotIndex(nums);
    int n=nums.size();

    //for line A index is from 0 to pivotindex bcoz after that line was stated again to increasing order
    if(target>=nums[0] && target<=nums[pivot]){
        int ansIndex=binarySearch(0,pivot,target,nums);
        return ansIndex;
    }

    //for line B index starts from pivot+1 to end
    else{
         int ansIndex=binarySearch(pivot+1,n-1,target,nums);
        return ansIndex;
    }
    return-1;

}
int main(){
    vector<int> arr={40,50,60,70,10,20,30};
   // int n=arr.size();
    int target=10;
    cout<<"The Final Index is = "<<search(arr,target);


}

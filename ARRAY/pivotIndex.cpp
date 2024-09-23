#include<iostream>
#include<vector>
using namespace std;

//Brute Force Approach
int brute(int arr[] ,int n){
    for(int i=0 ;i<n ;i++){
        int lsum=0;
        int rsum=0;

        //1st loop for adding leftmost elements of array
        for(int j=0 ;j<i ;j++){
            lsum+=arr[j];
        }
        //2nd loop for rightmost sum means excluding i bcoz it will not added
        for(int j=i+1;j<n;j++){
            rsum+=arr[j];
        }
        //pivot index
        if(lsum==rsum){
            return i;
        }
    }
    return -1;
}

int pivotIndex(vector<int> nums){
    int n=nums.size();
    // phle do array bnayenge sum krne k liye or zero se initialise keedenge pure ko
    vector<int>lsum (nums.size(),0);
    vector<int>rsum (nums.size(),0);

    // first we calculate the lsum in one iteration
    //i ko 1 se start krenge khuki usse phle zero hi aaega sum

    for(int i=1 ;i<n ;i++){
       lsum[i]=lsum[i-1]+nums[i-1];//i=1=(0+1) 1st iteration
    }

     for(int i=n-2 ;i>=0 ;i--){
       rsum[i]=rsum[i+1]+nums[i+1];//i=1=(0+1) 1st iteration
    }
    
    for(int i=0 ;i<n ;i++){
        if(lsum[i]==rsum[i]){
            return i;
        }

    }
    return -1;

}


int main(){
    vector<int>nums={1,7,3,6,5,6};
    
   int ans= pivotIndex(nums);
   // int n=6;
    // int ans =brute(arr,n);
    cout<<"The Pivot Index is "<<ans;

    
}
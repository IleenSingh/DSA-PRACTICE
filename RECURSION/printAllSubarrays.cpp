#include<iostream>
#include<vector>
using namespace std;

void printSubarray(vector<int>&nums ,int start ,int end){
    //base case =>when end hits the size of nums
    if(end == nums.size()) return ;

    //1 case => ek set ka ek line print krungi or uss set k baaki line recursion print krega
    for(int i=start ;i<=end ;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    //now to print whole set we increment end so that it creates the remaining set
    printSubarray(nums ,start,end+1);
}

void mainSubarray(vector<int>&nums){
    for(int start =0 ;start<nums.size() ;start++){
        int end = start;
        printSubarray(nums,start,end);
    }
}

int main(){
    vector<int>nums ={1,2,3,4,5,6,7,8,9};
    mainSubarray(nums);
}
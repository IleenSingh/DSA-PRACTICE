/*
55. Jump Game
Medium
Topics
Companies
You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
 

Constraints:

1 <= nums.length <= 104
0 <= nums[i] <= 105
*/
#include<iostream>
#include<vector>
using namespace std;

bool solve(vector<int>&nums , int i){
    //base case-1 when the end location is reached
    if(i == nums.size()-1 ) return true;
    //base case-2  when its jump outside the nums ,means simply its goes out of bound
    if(i>=nums.size()) return false;
    //base case -3 when nums[i] =0 means we stuck at this location 
    if(nums[i] ==0) return false;

    //phle recursion k answer ko false se initialise krwaenge 
    bool reAnswer = false;

    //ab loop se ek case hmm chalaenge means one jump baaki k recursion smbhalega
    for(int jump =1 ;jump<=nums[i] ;jump++){
        reAnswer = reAnswer || solve(nums , i+jump);

    }
    return reAnswer;

}


bool canJump(vector<int>&nums){
    return solve(nums,0);
}

int main(){
    vector<int> nums ={2,3,1,1,4};
    cout<<"Reached or Not -> "<<canJump(nums)<<endl;
}
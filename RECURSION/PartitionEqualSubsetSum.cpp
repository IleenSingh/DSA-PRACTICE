/*
416. Partition Equal Subset Sum (Medium)
Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
 
Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= 100
*/

#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

bool answer(vector<int>&nums ,int target ,int i){
    //handling negative case and loop end as base case
    if(target<0 || i==nums.size()) return false;
    //true case 
    if(target == 0) {//means we finf the answer 
    return true;
    }

    //include function
    bool include = answer(nums , target - nums[i] , i+1);
    bool exclude = answer(nums , target, i+1);//ab dono mai se jo bhi true hoga usko return krrdenge
    return include||exclude;

}

bool canPartion(vector<int>&nums){
    //sum find krr lenge pure array ka 
    int sum = accumulate(nums.begin() , nums.end() ,0);
    //for handling odd sums
    if(sum%2!=0) return false;
    int target = sum>>1; //finding target if it is zero that means we got equal subsets

    return answer(nums ,target ,0);

    
}
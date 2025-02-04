// 198. House Robber (Medium)
// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.
 

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 400

#include<vector>
#include<iostream>
using namespace std;

int money(vector<int>& nums , int n ,int i){
    //base case -> jab array khtm hojaye yaa i greater or equal hojaye n se
    if(i>=n) return 0;

    //include case -> i th location se start hoga phir alternate saare elements ka add on hoga money
    //ith term ko mai plus krungi (1 case solve) and baaki remaining terms ko recursion krega 
    int includeAns = nums[i] + money(nums,n,i+2); //i+2 because ek ghar ko skip krke rob krna hai

    //exclude case -> ith location ko discard krrdenge toh kch bhi add ni hoga 0 plus krege then
    //recursion i+1 th se start krega add krna money ko
    int excludeAns = 0 + money(nums,n,i+1);
     
    //ab in dono mai answer mai jo bada hoga woh final answer bnn jaega 
    int finalAns = max(includeAns , excludeAns);
    return finalAns;
   }




    int rob(vector<int>& nums) {
        int index =0 ;
        int answer = money(nums , nums.size() , index);
        return answer;
    }



    int main(){
        vector<int>nums ={2 ,7,9,3,1};
        cout<<"The money he got after robbing the houses -> "<<rob(nums)<<endl;
    }
/*Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

0 <= i, j < nums.length
i != j
|nums[i] - nums[j]| == k
Notice that |val| denotes the absolute value of val.

 

Example 1:

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.
Example 2:

Input: nums = [1,2,3,4,5], k = 1
Output: 4
Explanation: There are four 1-diff pairs in the array, (1, 2), (2, 3), (3, 4) and (4, 5).*/


#include <iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int kDiffPairs(vector<int>nums , int k){
    sort(nums.begin() ,nums.end());
    set<pair<int,int>> ans;
    int i=0;//initialising pointer
    int j =1;
    //to give unique number of pairs we use set
    int n=nums.size();

    while(j < n){

        int diff = nums[j] - nums[i] ;
        if(diff==k){
            ans.insert({nums[i] , nums[j]});
            i++ , j++;
        }
        else if(diff > k){
            i++;
        }
        else{
            j++;
        }
        if(i==j) j++;
    }
    return ans.size();
}

int main(){
    vector<int>nums ={1,2,3,4,5};
    int k =1;
    int ans = kDiffPairs(nums , k);
    cout<<"The total number of Unique pairs in this array -> "<<ans<<endl;
    }



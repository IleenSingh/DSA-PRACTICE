#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

void solve(vector<int>&nums , int i ,int&ans ,int step){
    //base case-1 when the end location is reached
    if(i == nums.size()-1 ) {
        ans = min(ans,step);
        return;
    }
    if(i>=nums.size()) return ;

   
    for(int jump =1 ;jump<=nums[i] ;jump++){
        solve(nums , i+jump , ans ,step+1);

    }
}

int canJump(vector<int>&nums){
    int ans =INT_MAX;
    solve(nums,0,ans ,0);
    return ans;
}

int main(){
    vector<int> nums ={2,3,1,1,4};
    cout<<"Reached or Not -> "<<canJump(nums)<<endl;
}
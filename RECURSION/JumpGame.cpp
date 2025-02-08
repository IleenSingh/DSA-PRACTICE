#include<iostream>
#include<vector>
using namespace std;

bool solve(vector<int>&nums , int i){
    //base case-1 when the end location is reached
    if(i == nums.size()) return true;
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
#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int>&nums){
    // pointer i ko 1 se intialise krenge
    // pointer j ko 0 se
    int i=1,j=0;
    while(i<nums.size()){
        // first case same elements then i ko increment krrdena h 
        if(nums[i]==nums[j]){
            i++;
        }
        else{
            //second mai same ni h toh j ko increment krke i ko j mai store krao or i ko increment krrdo uske baad
            j++;
            nums[j]=nums[i];
            i++;
        }
        // we have to return number of k elements ,which is stored in j 
        

    }
    return j+1;
}

int main(){
    vector<int> nums={0,0,0,1,2,2,2,3,4,4,4,5};
    int n=nums.size();
    int ans=removeDuplicate(nums);
    // for(int i=0 ;i<n;i++){
    //     cout<<nums[i]<<" ";
    // }
    cout<<"the number of k elemets are "<<ans;

}

#include<iostream>
#include<vector>
using namespace std;

void moveNegativeNumber(vector<int>&nums){
    int n=nums.size();
    int l=0;
    int h=n-1;
    while(l<h){
        //-ve 
        if(nums[l]<0)
            l++;
        
        
        else if(nums[h]>0)
          h--;
        
        else
          swap(nums[l],nums[h]); 
          
       
    
    }

}




int main(){
    vector<int>nums ={10,-5,20,-4,-5,13};
    
    moveNegativeNumber(nums);
    int n=nums.size();
    for(int i=0 ;i<n ;i++){
        cout<<nums[i]<<" ";
    }

}
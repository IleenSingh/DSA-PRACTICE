#include<iostream>
#include<vector>
using namespace std;

vector<int> kClosestEle(vector<int>nums , int k ,int x){
    //using TWO POINTER APPROACH
    int l=0 , h=nums.size() - 1;

    while(h-l>=k){
        if(x-nums[l] > nums[h]-x){
            l++;
        }
        else{
            h--;
        }
    }

    vector<int> ans;
    for(int i=l ; i<=h ; i++){
        ans.push_back(nums[i]);
    }

    return ans;
}

int main(){
    vector<int>nums ={1,2,3,4,5};
    int k=4;
    int x=3;
    vector<int> ans =kClosestEle(nums,k,x);
    cout<<"K CLOSEST ELEMENTS are -> "<<endl;
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
}
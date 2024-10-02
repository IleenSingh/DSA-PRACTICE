/*Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

 

Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4*/


#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

bool koko_eats_allBanana(vector<int>&piles ,int h ,int k){
    long long int total_hrs=0;
    int n=piles.size();
    for(int i=0 ; i<n ; i++){
        total_hrs+=ceil(piles[i] / (double)k); //explicit typecasting

    }

    return total_hrs<=h;
}

//normal function
int koko_eating_banana(vector<int>&piles , int h){
    int start =1 ;
    int end =*max_element(piles.begin(),piles.end());
    
    int ans =0;

    while(start<=end){
        int mid = (start+end)>>1;
        int k=mid;
        if(koko_eats_allBanana(piles ,h,k)){
            ans=k;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}


int main(){
    vector<int> piles={30,11,23,4,20};
    int h=5;
    int ans = koko_eating_banana(piles,h);
    cout<<"KOKO eating speed is "<<ans <<" per hour ."<<endl;
}

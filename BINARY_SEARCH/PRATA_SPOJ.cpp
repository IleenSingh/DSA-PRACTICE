/*
IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting. The subcommittee members are asked to go to food connection and get P (P<=1000) pratas packed for the function. The stall has L cooks (L<=50) and each cook has a rank R (1<=R<=8). A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes and so on (he can only cook a complete prata) (For example if a cook is ranked 2, he will cook one prata in 2 minutes one more prata in the next 4 mins an one more in the next 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas as he does not have enough time for the 4th prata). The webmaster wants to know the minimum time to get the order done. Please write a program to help him out.
*/

#include<iostream>
#include<vector>
using namespace std;

 bool isPossible(vector<int>cookRank , int nP ,int mid){
    int currP = 0;//kitne bnn gye prata uska count
    for(int i =0 ; i<cookRank.size() ; i++){
        int R = cookRank[i];

    }
 }

 int minTimeToCompleteTheOrder(vector<int>cookRank , int nP){
    int start = 0;
    int highestRank= max_element(cookRank.begin() ,ccokRank.end());
    int end = highestRank * (nP *(nP +1) / 2);
    int ans =-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossible(cooksRank , nP , mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return ans ;
      
 }

int main(){
    //testcases
    int T ; cin >> T;
    while(T--){
         //number of prata and number of cooks
         int nP , nC;
         cin>>nP >>nC;
         //rank ka array 
         vector<int>cookRanks;
         //jitne number of cooks h utne ka hi rank dalna hai uska condition 
         while(nC--){
            int R ; cin>>R;
            cookrank.push_back(R);
         }
         cout<<minTimeToCompleteTheOrder(cookRanks,nP)<<endl;;
    }
}

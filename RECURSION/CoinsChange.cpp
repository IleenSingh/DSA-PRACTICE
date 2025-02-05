#include<iostream>
#include<vector>
#include<climits>
using namespace std;

 int solve(vector<int>& coins, int amount) {
        //base case => 0 amount k liye zero coin lgega 
        if(amount == 0) {
           return 0;
        }
        //we have to find mininmum coins intialising a variable for finding minimum coins from int max
        int minCoinAns = INT_MAX;
        // amount nikslne k liye poore coins k array ko traverse krre h 
        for(int i=0; i<coins.size(); i++) {
            int coin = coins[i];
            //if coin value ki value  amount value se zyada hui toh , no need to call recursive function
            //if coin value choti or equal hui toh amount value se , call recursive fiunction
            if( coin <= amount) {
                //1 coin toh use hogya h recursive call se phle hi , amount becomes amount-coins
                //baaki reciursion sambhal lega
                int recursionAns = solve(coins, amount-coin);
                //invalid case (recursionAns -> INT_MAX;)
                //valid case (recursionAns -> not equal to INT_MAX;)
                if(recursionAns != INT_MAX) {
                    //valid answer aaaya h 
                    int coinsUsed = 1 + recursionAns;
                   
                    minCoinAns = min(minCoinAns, coinsUsed);
                }

            }
        }
    return minCoinAns;
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins, amount);
        if(ans == INT_MAX) {
            return -1;
        }
        else
            return ans;
    }


    int main (){
        vector<int> coins ={1,2,5};
        int amount =11;
        cout<<"coinsUsed-> "<<coinChange(coins,amount);
    }
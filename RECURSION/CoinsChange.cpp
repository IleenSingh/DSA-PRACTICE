/*
322. Coin Change (Medium)
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
Example 2:

Input: coins = [2], amount = 3
Output: -1
Example 3:

Input: coins = [1], amount = 0
Output: 0
 

Constraints:

1 <= coins.length <= 12
1 <= coins[i] <= 231 - 1
0 <= amount <= 104
*/

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
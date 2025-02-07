/*
1981. Minimize the Difference Between Target and Chosen Elements
Medium
Topics
Companies
Hint
You are given an m x n integer matrix mat and an integer target.

Choose one integer from each row in the matrix such that the absolute difference between target and the sum of the chosen elements is minimized.

Return the minimum absolute difference.

The absolute difference between two numbers a and b is the absolute value of a - b.

 

Example 1:


Input: mat = [[1,2,3],[4,5,6],[7,8,9]], target = 13
Output: 0
Explanation: One possible choice is to:
- Choose 1 from the first row.
- Choose 5 from the second row.
- Choose 7 from the third row.
The sum of the chosen elements is 13, which equals the target, so the absolute difference is 0.
Example 2:


Input: mat = [[1],[2],[3]], target = 100
Output: 94
Explanation: The best possible choice is to:
- Choose 1 from the first row.
- Choose 2 from the second row.
- Choose 3 from the third row.
The sum of the chosen elements is 6, and the absolute difference is 94.
Example 3:


Input: mat = [[1,2,9,8,7]], target = 6
Output: 1
Explanation: The best choice is to choose 7 from the first row.
The absolute difference is 1.
 
*/

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int solve(vector<vector<int>>&mat , int&target ,int sum ,int row){
    //base case -> When row ends means all recursion are made and checked and we the minimse combination
    if(row == mat.size()){
        //tab return krrdenge jo main answer hoga sum krke combination ka 
        return abs(target-sum);
    }
    int ans = INT_MAX; //to find the minimum
    for(int col =0 ; col< mat[row].size() ;col++){
         //recursion ka answer
         int recAns = solve(mat , target , sum+mat[row][col] , row+1);
         ans =min(ans ,recAns);
    }
    return ans;

}

int minimizeTheDifference(vector<vector<int>>&mat , int target){
    int sum=0 , row =0;
    return solve(mat,target,sum,row);
}

int main(){

    vector<vector<int>> mat ={{1,2,3} , {4,5,6} ,{7,8,9}};
    int target =13;
    cout<<minimizeTheDifference(mat , target)<<endl;

}
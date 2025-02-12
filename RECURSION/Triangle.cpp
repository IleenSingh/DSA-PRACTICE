/*
120. Triangle
Medium
Topics
Companies
Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

 

Example 1:

Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
Output: 11
Explanation: The triangle looks like:
   2
  3 4
 6 5 7
4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).
Example 2:

Input: triangle = [[-10]]
Output: -10
 

Constraints:

1 <= triangle.length <= 200
triangle[0].length == 1
triangle[i].length == triangle[i - 1].length + 1
-104 <= triangle[i][j] <= 104
 

Follow up: Could you do this using only O(n) extra space, where n is the total number of rows in the triangle?
*/

#include<iostream>
#include<vector>
using namespace std;

int answer(vector<vector<int>>& triangle ,int row  ,int col ){
    //base case -> when row hits end
    if(row == triangle.size() - 1){
        return triangle[row][col];
    }

    //for going in i th index of every row we incrementing and adding up the current values 
    int down = triangle[row][col] + answer(triangle , row+1 ,col);

    //for going i+1 th index of every row we increment both row and col 
    int plus = triangle[row][col] + answer(triangle , row+1 ,col+1);

    //minimum path means minimum of both
    return min(down,plus);
}

int minimumTotal(vector<vector<int>>& triangle) {
        return answer(triangle , 0 , 0);
        //2d array , row , col
}

/*72. Edit Distance
Medium
Topics
Companies
Given two strings word1 and word2, return the minimum number of operations required to convert word1 to word2.

You have the following three operations permitted on a word:

Insert a character
Delete a character
Replace a character
 

Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
Example 2:

Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
 

Constraints:

0 <= word1.length, word2.length <= 500
word1 and word2 consist of lowercase English letters.*/


#include<iostream>
#include<algorithm>
using namespace std ;

int operations(string &w1 ,string &w2 ,int i ,int j){
    //base case 1 -> jab word 1 k ch khtm hojaye but w2 k bche ho toh apn ko insert krna padega taaki w1 w2 k jese bnn jaye 
    if(i>=w1.length()) return w2.length() -j;
    // w2 ki length return krwayenge kyuki utne elements ko add hi krna padega mtlb utne operations honge
    if(j>=w2.length()) return w1.length() -i;

    int ans =0

}

int main(){
    string w1 = "prakash";
    string w2 ="kas";
    int ans =operations(w1,w2,0,0);
    cout<<ans<<endl;
}
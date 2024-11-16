/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
*/

#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix( vector<string>s ){
    string ans;
    int i=0;//loop chalane k liye elements pe
    while(true){//infinite loop
    char curr_ch = 0;
    //sare string pe iterate krne k liye for each loop
    for(auto str : s){
        //out of bound wala case
        if(i>=str.size()){
            curr_ch = 0;
            break;
        }
        //ek character se staert krne k liye comparision
        if(curr_ch==0 ){
            curr_ch=str[i] ;
        }
        else if(str[i] != curr_ch){ //equal hi ni h dusri string ka first lletter toh break krrdenge
            curr_ch = 0;
            break;
        }
    }//break k baad for loop se bhar aagye 
    if(curr_ch == 0){ 
        break;
        } //while loop se bhar aane ka 

    ans.push_back(curr_ch);
    i++;
    }
    return ans;
}


int main(){
    vector<string> s ={ "flower","flow","flight"};
    cout<<"the longest common prefix string is -> "<<longestCommonPrefix(s)<<endl;
}
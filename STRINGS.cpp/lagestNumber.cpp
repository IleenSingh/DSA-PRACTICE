/*
179. Largest Number
Solved
Medium
Topics
Companies
Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 109
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

static bool mycomp(string a ,string b){
     //if lexicographical order se glt aarhi h toh dono string ko add krrlenge
     // usme se jo badha hoga usko return krrdenge
     string t1 = a+b ;
     string t2 = b+a ;
     return t1>t2;  // agar t1 hua grater toh return in case false hui 
     //condition toh t2 return krrenge
   }

    string largestNumber(vector<int>& nums) {
        //saare numbe rko string mai convert krne k liye vector
        vector<string>snums;
        //sabko string mai convert krne k liye iterator
        for(auto s : nums){
            snums.push_back(to_string(s));
        }

        //sort krenge saare strings with respect to comparator
        sort(snums.begin() ,snums.end() ,mycomp);

        //special cases of "0"
        //nums =[0,0,0]
        //agar first index of string hi zero hui means largest among all diigt is zero
        //so we return a single zero
        if(snums[0] == "0")  return "0";

        //answer
        string ans ="";
        for(auto str : snums){
            ans+=str;
        }
        return ans ;

    }

    int main(){
        vector<int> nums ={3 , 30 , 34 ,5 ,9 };
        cout<<"Largest Number - > "<<largestNumber(nums)<<endl;
    }
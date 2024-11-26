/*
28. Find the Index of the First Occurrence in a String
Easy
Topics
Companies
Given two strings needle and haystack, return 28. Find the Index of the First Occurrence in a String
Easy
Topics
Companies
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters., or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
*/

#include<iostream>
using namespace std;

int strFirstIndexOcc(string haystack , string needle){
    //haystack ka size
    int n = haystack.size();
    //needle ka size
    int m =needle.size() ;

    //do loop chlega i and j i chlega haystack pe or j chlega hamara neddle pe
    for(int i =0 ; i<=n-m ; i++){

        for(int j= 0 ;j<m ;j++){
        //n-m kyuki last tkk chalane ki koi jarurat ni h agar needle ki size se hi match ni hua toh aage searchn krne ka mtlb ni hai 
        
        //first condition agar value match ni hui i and j ki toh 
        if(needle[j] != haystack[i+j]){   //i+j isliye kyuki i ek baar hi run hoga or j ki apn ko saari values ko match krwana h toh i ko bhi sath mai badhane k liye i + j use krenge
            break;
            //pure j loop se bhar krega break
        }

        //condition jisme pura j match hogya 
        if(j == m-1){
            return i ; //i isliye kyuki j apne string k last index pe h or i woh index h jha se comparision shuru hua 
        }
        }
    }
    return -1;
}

int main(){
    string needle = "sad";
    string haystack ="letsadu";
    int ans = strFirstIndexOcc(haystack , needle);
    cout<<"The index of the first occurrence of needle in haystack -> "<<ans <<endl;
}
/*
205. Isomorphic Strings

Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"

Output: true

Explanation:

The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
Example 2:

Input: s = "foo", t = "bar"

Output: false

Explanation:

The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

Example 3:

Input: s = "paper", t = "title"

Output: true

 

Constraints:

1 <= s.length <= 5 * 104
t.length == s.length
s and t consist of any valid ascii character.
*/


#include<iostream>
using namespace std;

bool isomorphicStrings(string s , string t){
      //s k characters ko mapp krenge with respect to t k characters
    int hash[256] = {0};
    // store krenge true values agar woh already mapped hai s[i] mai 
    bool itTCharmapped[256] ={0};

    //s or t k mapping k liye loop
    for(int i=0 ; i<s.size() ; i++){
        //dono char k place ko check krenge ki mapped h ki ni
        if(hash[s[i]] ==0 && itTCharmapped[t[i]]==0){
            hash[s[i]] = t[i] ; //mtlb t ka first character s mai mapped hogya h 
            itTCharmapped[t[i]] = true ; //jesi hi s mai mapped hua h wesi t k uss char ko true krrdenge ki woh mapped h ek se ab dusre letter se ni hoga
        }
    }

    //incase phle se mapped h ya mapp hua hi ni h wala case
    for(int i=0 ; i<s.size() ;i++){
        if(char(hash[s[i]]) != t[i]){
            return false ;
        }
        
    }

    return true;
}
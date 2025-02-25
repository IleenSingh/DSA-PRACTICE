/*
44. Wildcard Matching
Hard
Topics
Companies
Given an input string (s) and a pattern (p), implement wildcard pattern matching with support for '?' and '*' where:

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).
The matching should cover the entire input string (not partial).

 

Example 1:

Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
Example 2:

Input: s = "aa", p = "*"
Output: true
Explanation: '*' matches any sequence.
Example 3:

Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.
 

Constraints:

0 <= s.length, p.length <= 2000
s contains only lowercase English letters.
p contains only lowercase English letters, '?' or '*'.
*/

#include<iostream>
#include<string>
using namespace std;

bool isMatchHelper(string&s ,int si ,string&p ,int pi){
    //Base case 1 when both string and pattern reacch the end limit
    if(si == s.size() && pi == p.size()){
        return true ;
    }
    //Base case 2 when at the end of the pattern is not star or something else return false and when reach * return true
    if(si ==s.size() && pi == p.size() ){
        while(pi<p.size()){
            if(p[pi] !='*')  return false;
                pi++; 
        }
        return true;
    }

    //when single char are matching 
    if(s[si] == p[pi] || '?' == p[pi]){
        return isMatchHelper(s ,si+1 ,p ,pi+1);
    }

    //handling ****************************
    if(p[pi] == '*'){
        //case 1 whwen we assume * are empty and null
        bool caseA =isMatchHelper(s,si,p,pi+1);
        //case2 here * consume one char
        bool caseB =isMatchHelper(s,si+1 ,p,pi);

        return caseA || caseB ;


    }
    //char doesnt match
    return false;
}

bool isMatch(string s , string p){
    int si =0;//pointer for string
    int pi =0;//pointer for pattern
    return isMatchHelper(s,si,p,pi);
}

int main(){
    string s ="abcdefg";
    string p ="ab*fg";
    cout<<isMatch(s,p);
}
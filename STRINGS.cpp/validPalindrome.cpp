/*  https://leetcode.com/problems/valid-palindrome-ii/   */

/*Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.*/

#include<iostream>
using namespace std;

bool checkPalindrome(string s , int start ,int end ){
    while(start<=end){
        if(s[start] != s[end]){
            return false;
        }
        else{
            start++; //ye dono condition se out of bound hojaega
            end--;
        }

    }
    return true;
}

bool validPalindrome(string s){
    int i=0;
    int j = s.size() - 1;
    while(i<=j){
        if(s[i] == s[j]){
            i++ ;
            j--;
        }
        else{
            //s[i]!=s[j]
            //wala case h 
            //example rabbcar h ab isme ya toh bb palindrome hooga ya bc but check krna h ek ch ko delete krke kon sa 
            //case true h toh ek ek charater ko delete krenge

            //first b mtlb i th ch ko delete krenge 
            bool ansOne = checkPalindrome(s ,i+1 ,j);

            //second c ko delete krenge mtlb i ko j-1 compare hoga
            bool ansTwo = checkPalindrome(s , i ,j-1);

            //phir jo bhi answer aaega usko or krrdenge ,jisme jo bhi true case hoga woh return hojaega 
            bool finalAns = ansOne || ansTwo ;

            return finalAns ;
        }
    }
    return true;
}

int main(){
    string s ="rabbcar";
    cout<<"Check whether the string is valid palindrome or not - > "<<validPalindrome(s) <<endl;
}
/*
Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

 

Example 1:

Input: s = "ab-cd"
Output: "dc-ba"
Example 2:

Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
Example 3:

Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
 

Constraints:

1 <= s.length <= 100
s consists of characters with ASCII values in the range [33, 122].
s does not contain '\"' or '\\'.
*/

#include<iostream>
using namespace std;

string reverseOnlyLetters(string s){
    //do pointer intialise krenge
    int l=0 ;
    int h=s.size()-1;
    while(l<h){
        //1st case
        if(isalpha(s[l]) && isalpha(s[h])){
            swap(s[l] , s[h]);
            l++;
            h--;
        }

        //2nd case
        else if(!isalpha(s[l])){
            l++;
        }
        //3rd case
        else{
            h--;
        }
    }
    return s;
}

int main(){
   string s = "a-bC-dEf-ghIj";
   cout<<"s after reversing it -> "<<reverseOnlyLetters(s);
}
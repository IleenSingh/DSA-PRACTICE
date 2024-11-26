/*
8. String to Integer (atoi)
Medium
Topics
Companies
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:

Whitespace: Ignore any leading whitespace (" ").
Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity if neither present.
Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.
Return the integer as the final result.

 

Example 1:

Input: s = "42"

Output: 42

Explanation:

The underlined characters are what is read in and the caret is the current reader position.
Step 1: "42" (no characters read because there is no leading whitespace)
         ^
Step 2: "42" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "42" ("42" is read in)
           ^
Example 2:

Input: s = " -042"

Output: -42

Explanation:

Step 1: "   -042" (leading whitespace is read and ignored)
            ^
Step 2: "   -042" ('-' is read, so the result should be negative)
             ^
Step 3: "   -042" ("042" is read in, leading zeros ignored in the result)
               ^
Example 3:

Input: s = "1337c0d3"

Output: 1337

Explanation:

Step 1: "1337c0d3" (no characters read because there is no leading whitespace)
         ^
Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "1337c0d3" ("1337" is read in; reading stops because the next character is a non-digit)
             ^
Example 4:

Input: s = "0-1"

Output: 0

Explanation:

Step 1: "0-1" (no characters read because there is no leading whitespace)
         ^
Step 2: "0-1" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "0-1" ("0" is read in; reading stops because the next character is a non-digit)
          ^
Example 5:

Input: s = "words and 987"

Output: 0

Explanation:

Reading stops at the first non-digit character 'w'.

 

Constraints:

0 <= s.length <= 200
s consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.
*/

#include<iostream>
#include<limits.h>
using namespace std;

int myAtoi(string s){
    int num = 0 , i = 0 , sign =1 ;
    //num hamara ans hoga , i se iterate krenge string pe , sign hmm positive le k chlenge

    //first leading whitespaces ko remove krenge
    while(s[i] ==' '){
        i++;
    }

     // second handling the sign of the integer 
     if(i<s.size() && (s[i]=='-' || s[i] == '+')){
        //i<s.size out of bound nah jaye uske liye hai 
        sign = s[i] == '+' ? 1 : -1; //agar + h toh 1 return krro agar nevative h toh -1 
        i++;
     }

     //third handling special cases (out of range values)
     while(i<s.size() && isdigit(s[i])){
        //isdigit bss number dekhta hai

        if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i] > '7')){
            //num > INT_MAX/10 agar divide krne mai bhi zyada bada h toh into krke overflow hoga hi 
            //num  == INT_MAX/10 && s[i] > '7' agar same h number toh 10 se divide mai ek kmm hoga 10 se multiply mai 0 add hoga or main range hamari h 2147483647 rhta h toh mtlb last digit 7 sebada ni hona chaiye 
            return sign == -1 ? INT_MIN : INT_MAX ;
        }
        num = num * 10 +(s[i] - '0');
        i++;
     }
     return num * sign ;


}

int main(){
    string s = "1337c0d3";
    cout<<"after conversion -> "<< myAtoi(s) <<endl;
}
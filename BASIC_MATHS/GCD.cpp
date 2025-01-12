/*
GCD of two numbers
Difficulty: BasicAccuracy: 51.03%Submissions: 98K+Points: 1
Given two positive integers a and b, find GCD of a and b.

Note: Don't use the inbuilt gcd function

Examples:

Input: a = 3, b = 6
Output: 3
Explanation: GCD of 3 and 6 is 3
Input: a = 1, b = 1
Output: 1
Explanation: GCD of 1 and 1 is 1
Constraints:
1 ≤ a, b ≤ 109
*/

#include<iostream>
using namespace std;

int gcd(int a, int b) {
        if(a==0) return b; 
        if(b==0) return a;
        
        while(a>0 && b>0) //jab tkk dono mai se koi zero ni hojata tnn tkk loop chlega
        if(a>b){
            a= a-b;
        }
        else{
            b=b-a;
        }
        return a==0?b:a;
    }

int main(){
    int a =72;
    int b =24;
    cout<<"Greatest Common Divisor is -> "<<gcd(a,b)<<endl;
}
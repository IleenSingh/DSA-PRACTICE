/*
415. Add Strings
Easy
Topics
Companies
Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"
Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"
Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
 

Constraints:

1 <= num1.length, num2.length <= 104
num1 and num2 consist of only digits.
num1 and num2 don't have any leading zeros except for the zero itself.
*/

#include<iostream>
#include<string>
using namespace std;

string answer(string&num1 , int i ,string&num2 ,int j ,int carry){
    //base case ->if both indices are become zero and no carry left
    if(i<0 && j<0 && carry == 0){
        return "";
    }
    //ek case 
    //convert krenge righmost digits se stirng ko integer mai
    int digit1 =(i>=0)?num1[i] -'0':0 ;
    //agar i bada h toh usko integer mai convert krrdo 0 se sub krke ni toh simple zero return krrdo
    int digit2 =(j>=0)?num2[j] -'0' :0 ;

    //ab digit mil gya h toh add krenge sabko 
    int sum = digit1 + digit2 + carry;
    //ab jo carry aaega usko extract krenge ni toh woh pure ko sum mai lelega 
    //example if 13 sum aaya h toh 1 ko extract krna padega ni toh 3 ki jagah 13 le lega sum mai 
    int newCarry = sum/10 ;
    //now convert the digit we got after sum to string 
    //like above we got 13 divide 10 gives 3 so converting 3 to string
    char currentDigit =(sum%10) + '0';

    //now we call recursive call for the rest of the digits
    return answer(num1 ,i-1 ,num2 ,j-1 ,newCarry) + currentDigit ;

}

string addStrings(string num1 , string num2){
    return answer(num1 , num1.size()-1 ,num2 ,num2.size()-1 ,0);
    //zero for carry
}

int main(){
    string num1 ="456";
    string num2 ="77";
    cout<<"The sum of the Strings ->"<<addStrings(num1 ,num2);
}
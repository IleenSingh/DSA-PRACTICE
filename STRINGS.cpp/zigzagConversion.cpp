/*
6. Zigzag Conversion
Solved
Medium
Topics
Companies
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"
 

Constraints:

1 <= s.length <= 1000
s consists of English letters (lower-case and upper-case), ',' and '.'.
1 <= numRows <= 1000
*/


#include<iostream>

#include<vector>

using namespace std;

string convert(string s , int numRows){

    //agar ek hi row ho toh 
    if(numRows == 1) return s ;

    //zigzag krwane k liye vector bnayenge total rows ki  size ki saari rows k liye
    vector<string>zigzag(numRows);

    int i=0 ;//saare characters pe iterate krne k liye
    int row = 0;
    bool direction = 1 ;//first case mai dalne k liye mtlb top to bottom jo straight chlega hi uske liye

    while(true){
        if(direction){
            while(row<numRows && i<s.size()) {
                 //mtlb first line pura chlega 
                 zigzag[row++].push_back(s[i++]); //row zero mai a push hoga phir b phir c               
            }
            row = numRows - 2; //ab zigzag pattern start krne k liye condition           
        }
        else{
            //bottom to top jarhe hai isme
            while(row>=0 && i<s.size()){
                zigzag[row--].push_back(s[i++]);
            }
            //zero tkk pahuch gya ab usko wapis one pe bhej do top to bottom k liye
            row =1;
        }

        if(i>=s.size()) break;  //loop se bhar aane ka condition 
        direction = !direction ; //direction change krne k liye condirion iss case mai zero hoga direction
    }

    string ans ="" ; //answer store krne k liye empty string
    //row wise puri strin ko return krwane k liye loop
    for(int i = 0 ; i<zigzag.size() ; i++){
        ans+=zigzag[i] ; //concatenate hojaenge saare string
    }
  
   return ans;



}

int main(){
    string s ="ABCDEFGHIJ";
    int numRows= 3 ;
    cout<<"ZIGZAG STRING - > "<<convert(s ,numRows);
}
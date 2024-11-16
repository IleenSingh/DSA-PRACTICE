/*Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/

#include<iostream>
using namespace std;

bool isVowel(char ch){
    ch=tolower(ch);//zyada condition ni likhna padega
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}

string reverseVowels(string s){
    //do pointer intialise krenge
    int l=0 ;
    int h=s.size()-1;
    while(l<h){
        //1st case
        if(isVowel(s[l]) && isVowel(s[h])){
            swap(s[l] , s[h]);
            l++;
            h--;
        }

        //2nd case
        else if(!isVowel(s[l])){
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
   string s = "PrAkash";
   cout<<"s after reversing it -> "<<reverseVowels(s);
}
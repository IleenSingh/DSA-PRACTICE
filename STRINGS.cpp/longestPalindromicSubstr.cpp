//brute force naive approach
#include<iostream>
using namespace std;

bool isPalindrome(string&s ,int i , int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string longestPalindromicSubstr(string s){
    //ans ki empty string jisme store krenge final longest string
    string ans="";
    for(int i =0 ;i<s.size() ; i++){
        for(int j=i ; j<s.size() ; j++){
            if(isPalindrome(s,i,j)){
                string t = s.substr(i , j-i+1);
                ans = t.size()>ans.size()?t:ans;

            }
        }
    }
    return ans;
}

int main(){
    string s ="babad";
    string ans = longestPalindromicSubstr(s);
    cout<<"The Longest Palindromic Substring of This String -> "<<ans<<endl;
}
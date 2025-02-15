#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string&s , int start ,int end){
    //base case -> when start and end become equal
    if(start>=end) {
        return true;
    }

    //one case -> if start end are not equal this means that the string is not palindrome 
    if(s[start]!=s[end]){
        return false ;
    }

    //if not then using recursive function to find out rest char are equal or not
    return isPalindrome(s,start+1 ,end-1);
}

int main(){
    string s;
    cin>>s;
    cout<<"Is Palindrome or not? -> "<<isPalindrome(s,0,s.size()-1)<<endl;
}
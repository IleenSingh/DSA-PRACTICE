#include<iostream>
#include<algorithm>
using namespace std;

// bool anagram(string s , string t){
//     sort(s.begin() , s.end());
//     sort(t.begin() , t.end());
//     if(s==t){
//         return true;
//     }
//     else{
//         return false;
//     }

// }

int main(){
    string s = "silent";
    string t = "listen";
    cout<<"s is a anagram of t -> "<<anagram(s,t);
}
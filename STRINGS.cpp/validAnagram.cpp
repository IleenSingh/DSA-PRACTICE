#include<iostream>
#include<algorithm>
using namespace std;


//method 1 sorting

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

// method 2 Counting

bool anagram(string s , string t){
    int freqTable[256] = {0}; //ek arrat h 255 ka sab zero se initialised hai
    //freq table bnayenge s ka
    for(int i=0 ;i<s.size() ; i++){
        freqTable[(int)s[i]]++;
    }

    //frq table match kr k decrement krenge
     for(int i=0 ;i<t.size() ; i++){
        freqTable[(int)t[i]]--;
    }
    
    //check krenge saare elements zero h ki ni 
    for(int i=0 ; i<256 ; i++){
        if(freqTable[i] != 0){
            return false;
        }
    }
    return true;


}

int main(){
    string s = "silent";
    string t = "listen";
    cout<<"s is a anagram of t -> "<<anagram(s,t);
}
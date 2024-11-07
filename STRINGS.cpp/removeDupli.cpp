#include<iostream>
using namespace std;

string removeDuplicates(string s) {
        string ans = "";
        int n = s.length();
        for(int i=0 ; i<n ;i++){
            char currChar = s[i];
            if(ans.empty()){
                //direct push krrdenge empty string mai
                ans.push_back(currChar);
            }
            else if(currChar == ans.back()){
                //agar main string ka new element  new string k last element k
                // equal hogya toh pop krrdenge means duplicate hata denge
                ans.pop_back();
            }
            else if(currChar!=ans.back()){
                ans.push_back(currChar);
            }
        }
        return ans;
    }

    int main(){
        string s ="abbaca";
        cout<<"After Removing Duplicates -> "<<removeDuplicates(s)<<endl;
    }
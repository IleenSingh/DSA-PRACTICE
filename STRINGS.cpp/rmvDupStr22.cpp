#include<iostream>
#include<vector>
using namespace std;

string removeKDuplicate(string s , int k ){
    //two pointer approach
    int i=0 , j=0;
    vector<int> count(s.size()); //count maintain krenge similar element ka jab tkk woh k k equal nah ho

    while(j<s.size()){
        //j tkk isliye chalayenge kyuki elemnts hi khtm hogye toh compare kisko krenge
        s[i] = s[j] ;//jesi k element remove honge toh new element ko removed element ki position mai lane k liye
        count[i] = 1;

        //first case
        //removal ka process
        if(i>0 && s[i] == s[i-1]){
            count[i] +=count[i-1];
        }
        //second case
        if(count[i] == k){
            // remove krne k baad jha se remove hua h i ko wha bhejenge
            i-=k;
        }
        i++ , j++ ;
    }
    return substr(0,i);
}


int main() {
    string str = "pbbcggttciiippooaais";
    int k = 2;
    cout << "Result: " << removeKDuplicate(str, k) << endl;
    return 0;
}


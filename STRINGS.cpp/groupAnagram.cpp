#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <unordered_map>
using namespace std;
 

 vector<vector<string>>groupAnagram(vector<string>&strs) {
    //map bna k usme key mai sorted values or value mai unsorted values jisse key bnni h usko store krenge
    map<string , vector<string>> mp ; //vector kyuki ek key se bhut saari values hoskti hai

    //iteration krenge pure string mai or ek ek string ko sort krke key mai dalenge or jo string hua sort usko value mai
    for(auto str : strs ){
        string s = str ;
        sort(s.begin() , s.end()); //s sort hogya h pura uska ab key bnn gye h 
        mp[s].push_back(str); //aet->eat , ate ,tea

    }

    vector<vector<string>>ans;
     for(auto it= mp.begin() ; it!=mp.end() ; it++){
        ans.push_back(it->second); //value return krwana h bss
     }
     return ans;
 }


// //method 2 

// std::array<int,256> hash(string s){
//    std::array<int,256>hash ={0};
//    for(int i=0 ;i<s.size() ; i++){
//       hash[s[i]]++;
//    }
//    return hash;
// }

//  vector<vector<string>>groupAnagram(vector<string>&strs) {
//    map<std::array<int,256> , vector<string>>mp;
//    for(auto str: strs){
//       mp[hash(str)].push_back(str);
//    }

//    vector<vector<string>>ans;
//      for(auto it= mp.begin() ; it!=mp.end() ; it++){
//         ans.push_back(it->second); //value return krwana h bss
//      }
//      return ans;
//  }



 int main(){
    vector<string>strs = {"eat" ,"tea","tan","ate","nat","bat"} ;
    vector<vector<string>>ans = groupAnagram(strs);
     for (auto group : ans) {
        for (auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
    

 }
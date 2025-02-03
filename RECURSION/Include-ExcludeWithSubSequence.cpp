#include<iostream>
#include<vector>
using namespace std;

void printSubsequences(string str , int i ,string output , vector<string>&ans){
    //base case ->jab index string ki length ko cover krrdega 
    if(i == str.length()){
        ans.push_back(output);
        return;
    }

    //1 case mai solve krungi 
    char ch = str[i];
    //include 
    printSubsequences(str , i+1 ,output+ch , ans);
    //current character was added to output to include the present element
    
    //exclude
    printSubsequences(str , i+1 ,output ,ans);
    //nothing was added to output string to perform exclude

}

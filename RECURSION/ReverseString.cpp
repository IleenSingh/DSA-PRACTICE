#include<iostream>
#include<string>
#include<utility>//used for swap

using namespace std;

void reverse(string&s ,int start ,int end){
    //base case -> stop when start is greater than end or equals too
    if(start>=end) return;

    //ek case mai solve krungi 
    swap(s[start] , s[end]);

    //recursive call for the rest 
    reverse(s,start+1 ,end-1);
}

int main(){
    string s;
    cin>>s;
    reverse(s,0,s.size()-1);
    cout<<"Reverse of a String -> "<<s<<endl;
}
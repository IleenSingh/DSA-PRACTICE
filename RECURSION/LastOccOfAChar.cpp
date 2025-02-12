#include<iostream>
using namespace std;

void lastOccLTR(string&s ,char x ,int i ,int&ans){
    //base case=> when string ends
    if(i>=s.size()) return;

    //ek case mai solve krungi
    if(s[i]==x){
        ans=i;
    }
    //recursive call every inde to find x
    lastOccLTR(s,x,i+1,ans);

}

void lastOccRTL(string&s ,char x ,int i ,int&ans){
    //base case=> when i becomes negative
    if(i<0) return;

    //ek case mai solve krungi
    if(s[i]==x){
        ans=i;
        return ;
        //answer milte hi return krdenge
    }
    //recursive call every inde to find x
    lastOccLTR(s,x,i-1,ans);

}


int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans =-1;

    // lastOccLTR(s,x,0,ans);
    lastOccRTL(s,x,s.size()-1 ,ans);
    cout<<ans<<endl;

}
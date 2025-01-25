#include<iostream>
using namespace std;

int fib(int n){
    //base case -> 0 and 1 hona hi h starting mai madatory h woh tbhi series aage badhega 
    if(n==0 || n==1){
        return n;
    }

    //recursive relation
    //fib(n) = fib(n-1) + fib(n-2);
    int Answer = fib(n-1) + fib(n-2);
    return Answer;
}

int main(){
    // if print krwana ho pura series toh
    int n=10;
    for(int i = 0; i<n; i++){
        cout<<fib(i)<<" ";
    }

    //agar print krna ho specific element at specific position 
    cout<<endl;
    cout<<fib(9);
}
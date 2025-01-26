#include<iostream>
using namespace std;

int getSum(int n){
    //base case -> sum find krna h 1 se n tkk ka toh 1 tkk hi chlega recursion means
    if(n==1) return 1;

    //recursion relation 
    //sum(n) = sum(n-1) + n
    int Answer = getSum(n-1) + n;
    return Answer;
}

int main(){
    cout<<getSum(10);
}
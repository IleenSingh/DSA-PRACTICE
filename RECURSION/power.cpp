#include<iostream>
using namespace std;

int pow(int n){
    //base case -> we know that power of any number is zero then its equal to one 
    if(n==0) return 1;

    //recursive call
    //pow(n) = 2 *pow(n-1);
    int recursionPart = pow(n-1);
    int Answer = 2 * recursionPart ;
    return Answer;
}

int main(){
    cout<<pow(10);
}
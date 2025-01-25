#include<iostream>
using namespace std;
 
void printCounting(int n){
    //apn ko n se leke 1 tkk counting print krna hai 
    //for example n=5 then output will be 54321
    //base case ->  we know ki one tkk krwana h print toh jese hi zero pe jaega return krwa denge function ko
    if(n==0) return;

    //processing
    //ek ek bar print krwa k minus krega recursion then print
    cout<<n<<" ";
    //recursive call
    printCounting(n-1);
}


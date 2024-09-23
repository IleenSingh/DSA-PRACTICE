
// Given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any ” / “ and ” % “ operators

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333… which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5

#include<iostream>
using namespace std;
//using basic maths formula
//divisor*quotient=dividend

int quotientAns(int dividend ,int divisor){
    

    int s=0;
    int e=dividend;
    int mid=s+((e-s)>>1);
    int ans=-1;

    while(s<=e){
        if(divisor*mid==dividend){
            return mid;
        }
        if(divisor*mid<=dividend){
            //it can be the answer
            //store value of mid
            ans=mid;
            //compute further
            s=mid+1;
        }
        else{
            //divisor*mid>=dividend
            e=mid-1;
        }
        mid=s+((e-s)>>1);
    }
    return ans;
}

int main(){
    int x=-10;
    int y=2;
    int answer =quotientAns(abs(x),abs(y));
    
    if((x>0 && y<0)||(x<0 && y>0))
    {
        answer=-answer;
    }
    cout<<"OUTPUT "<<answer;
    cout<<endl;

     
}
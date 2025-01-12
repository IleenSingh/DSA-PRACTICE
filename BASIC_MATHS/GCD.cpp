#include<iostream>
using namespace std;

int gcd(int a, int b) {
        if(a==0) return b; 
        if(b==0) return a;
        
        while(a>0 && b>0) //jab tkk dono mai se koi zero ni hojata tnn tkk loop chlega
        if(a>b){
            a= a-b;
        }
        else{
            b=b-a;
        }
        return a==0?b:a;
    }

int main(){
    int a =72;
    int b =24;
    cout<<"Greatest Common Divisor is -> "<<gcd(a,b)<<endl;
}
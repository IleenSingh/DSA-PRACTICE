#include<iostream>
using namespace std;

long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long int ans =1;
		    while(n>0){
		        //if n is odd then 
		        if(n&1){
		        ans = (ans * x) % M ;
		    }
		     x = (x*x )% M;
		      n>>=1;
		    }
		    return ans % M;
		}


int main(){
    int x = 3, n = 2, m = 4;
    cout<<"fe -> "<<PowMod(x,n,m)<<endl;
}
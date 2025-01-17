#include<iostream>
#include<vector>
using namespace std;

vector<bool>SieveOfEratosthenese(int n){
    //creating a array in which all are marked prime
    vector<bool>sieve(n+1 , true);
    sieve[0]=sieve[1]=false; //bcoz inke factor 2 se kmm rhte hai 

    for(int i=2 ; i<=n ; i++){
        if(sieve[i]==true){
            int j= i*2 ;
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

vector<bool>optiSieveOfEratosthenese(int n){
    //creating a array in which all are marked prime
    vector<bool>sieve(n+1 , true);
    sieve[0]=sieve[1]=false; //bcoz inke factor 2 se kmm rhte hai 

    for(int i=2 ; i*i<=n ; i++){ //outer loop optimization
        if(sieve[i]==true){
            int j= i*i ;//inner loop optimization
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

int main(){
    vector<bool>sieve = optiSieveOfEratosthenese(100);
    for(int i =0 ; i<=100 ;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
}
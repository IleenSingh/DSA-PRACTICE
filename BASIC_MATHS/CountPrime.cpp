#include<iostream>
using namespace std;



                    //  NAIVE APPROACH
// bool isPrime(int n){
//     if(n<=1)  return false;

//     for(int i=2 ; i<n ; i++){
//         if(n%i ==0){
//             return false;
//         }
//     }
//     return true;
// }

// int countPrime(int n){
//     int count =0;

//     for(int i=0 ; i<=n ;i++){
//         if(isPrime(i)){
//             count++;
//         }
//     }

//     return count ;
// }

int main(){
    int n =100;
    cout<<"Count number of primes -> "<<countPrime(n)<<endl;
}
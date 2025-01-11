#include<iostream>
#include<vector>
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


               //Sieve of Eratosthenese

//number lenge
int countPrime(int n){
    if (n==0) return 0 ; //handling case of zero

    //ek vector bnayenge saare numbers ko prime marked krne k liye
    vector<bool> prime(n , true) ; //saare marked hogye true se
    prime[0]=prime[1]=false ; //neglecting 0 and 1 explicitly

    int count =0 ; //counter for prime


    // main loop 
    //ab two k multiples ko mark krenge because they r not prime
    for(int i =2 ; i<n ; i++){
        if(prime[i]){    //suppose 2
            count++;     //add hogya kyuki true marked h and prime bhi hai 
        }

        int j =2*i;  //2*2=4
        while(j<n){
            prime[j]=false; //4 6 8 10 12 .......so on non prime marked hojaenge or loop mai guss hi ni paenge

            j+=i;
        }
    }
    return count;
}




int main(){
    int n =100;
    cout<<"Count number of primes -> "<<countPrime(n)<<endl;
}
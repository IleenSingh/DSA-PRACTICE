#include<iostream>
using namespace std;
 

 // we have to return a number in the format of single digits

 //logic
    // 1 . do the mode of the current number with 10 
    //2 .  then divide the number with 10 to remove the last element so in the next iteration it will return its one before digit 

void returnDigitsWithRecursion(int num){
    //base case
    if(num == 0) 
    return ;
              //REVERSE PRINT 
    // //1st case 
    // //mode part
    // int Digit =  num %10 ;
    // cout<<Digit<<" ";

    // //recursive part
    // //divide it 
    // int newNumber = num / 10 ;
    // returnDigitsWithRecursion(newNumber);


             //real no reverse
     //recursive part
    //divide it 
    int newNumber = num / 10 ;
    returnDigitsWithRecursion(newNumber);


     //1st case 
    //mode part
    int Digit =  num %10 ;
    cout<<Digit<<" ";

         

}

int main(){
    returnDigitsWithRecursion(21345) ;
}
#include<iostream>
#include<cstring>
using namespace std ;

bool checkPalindrome(char arr[] , int size){
    int low =0;
    int high =size -1 ;

    while(low<=high){
        if(arr[low] == arr[high] ){
            low++;
            high--;
        }
        else{
            //equal ni h character toh palindrome ni h
            return false;
        }
    }
    return true ;
}

int main(){
    char arr[1000];
    cin>>arr;
    int len = strlen(arr);
    cout<<"PAlINDROME OR NOT -> "<<checkPalindrome(arr , len);
}
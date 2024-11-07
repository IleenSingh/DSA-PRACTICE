#include<iostream>
using namespace std;

int getLength(char arr[] , int size){
    int count = 0;
    int index = 0;
    while (arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

int main(){
    char arr[100];
    
    cin>>arr;
    cout<<"The length of the array-> "<<getLength(arr , 100)<<endl;
}
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

void replaceCharacter(char originalChar , char newChar , char arr[] ,int size ){
    for(int i =0 ;i<size ; i++){
        if(arr[i] == originalChar){
            arr[i]=newChar;
        }
    }
}

int main(){
    char arr[100];
    
    cin>>arr;
    // cout<<"The length of the array-> "<<getLength(arr , 100)<<endl;
    
    replaceCharacter('@' , ' ' , arr ,100);
     cout<<"The New Sentence -> "<<arr;

}

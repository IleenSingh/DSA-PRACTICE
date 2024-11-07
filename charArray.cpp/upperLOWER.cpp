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

void convertUpperToLower(char arr[] , int size ){
    int len =getLength(arr , size);
    for(int i =0 ;i<len ; i++){
        //jis word ko apn change krna h 
        char ch =arr[i] ; 
        //agar woh lower mai h tbhi usko change krne  k liye case 
        if(ch>='A' && ch<='Z'){
            ch = ch - 'A'+'a';
        }
        arr[i] = ch;
    }
}

void convertLowerToUpper(char arr[] , int size ){
    int len =getLength(arr , size);
    for(int i =0 ;i<len ; i++){
        //jis word ko apn change krna h 
        char ch =arr[i] ; 
        //agar woh lower mai h tbhi usko change krne  k liye case 
        if(ch>='a' && ch<='z'){
            ch = ch - 'a'+'A';
        }
        arr[i] = ch;
    }
}

int main(){

    char arr[1000];
    cin>>arr;
    // convertUpperToLower(arr ,1000);
    convertLowerToUpper(arr,1000);
    cout<<arr<<endl;
}


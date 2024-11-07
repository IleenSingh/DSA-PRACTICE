#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void reverseCHAR(char arr[] , int size){
    int low=0;
    int high=size-1;
    while(low<high){
        swap(arr[low] , arr[high]);
        low++;
        high--;
    }
}

int main(){
    char arr[100];
    cout<<"ARRAY"<<endl;
    cin>>arr;
    cout<<"REVERSED ARRAY"<<endl;
    int length = strlen(arr);
    reverseCHAR(arr , length);
    cout<<arr;
}
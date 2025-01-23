#include<iostream>
using namespace std;

int main(){
    //pointer create kiya hai jo saare rows ko jisko hmne 1-d array bnaya h unke base address ko 
    int **arr = new int*[5];
    //ab iss loop se saare 1-d arrays create honge
    for(int i=0 ;i<4 ;i++){
        arr[i] =new int[4];
    }

    //inputs lenge
    for(int i=0 ; i<5 ;i++){
        for(int j=0 ; j<4 ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl<<"Print the 2-D Array "<<endl;
     for(int i=0 ; i<5 ;i++){
        for(int j=0 ; j<4 ; j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}
#include<iostream>
#include<limits.h>

using namespace std;

int minimumValue( int arr[3][4],int rowSize ,int colSize){
    // int minValue= INT_MAX;
   

    // for(int row=0 ;row<rowSize ;row++){
    //     for(int col=0 ; col<colSize ;col++){
    //         minValue=min(arr[row][col],minValue);
            
    //     }

    // }
    // return minValue;
    
    int minValue = INT_MAX;

    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {
            minValue = min(arr[i][j], minValue);
        }
    }
    
    return minValue;
}

int main(){
    int arr[3][4]={{1,2,3,4},{12,33,44,55},{21,31,4,1}};
    int rowSize=3;
    int colSize=4;
    int ans =minimumValue(arr,rowSize,colSize);
    cout<<"The minimum value of the vector  is "<<ans;
}
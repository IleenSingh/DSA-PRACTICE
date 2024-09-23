#include<iostream>
using namespace std;

void transpose( int arr[3][3],int rowSize ,int colSize){
    
    for(int row=0 ;row<rowSize ;row++)
    {  
        for(int col=row ;col<colSize ;col++){
           swap(arr[row][col] ,arr[col][row]);
        }
    }
  
    
    for(int row=0 ;row<rowSize ;row++)
    {  
        for(int col=0 ;col<colSize ;col++){
           cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}


   
   int main(){
    int arr[3][3]={{1,2,4},{12,33,55},{21,4,1}};
    int rowSize=3;
    int colSize=3;
    transpose(arr,rowSize,colSize);
   }

#include <iostream>
using namespace std;
int main(){
    int arr[3][4]={{40,30,20,10},{10,20,30,40},{20,20,20,20}};
    int rowIndex=3;
    int colIndex=4;
    //diagonal
    for(int row=0;row<rowIndex;row++){
        for(int col=0 ;col<colIndex ; col++){
            //  if (row + col == colIndex - 1)
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}
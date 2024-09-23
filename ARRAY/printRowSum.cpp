#include<iostream>
using namespace std;

void printRowSum( int arr[3][3],int rowSize ,int colSize){
    int sum = 0;
    for(int row=0 ;row<rowSize ;row++)
    {
    
        for(int col=0 ;col<colSize ;col++){
            if(row==col)
            sum = sum+arr[row][col];
        }
        

    }
    cout<<sum<<endl;
}
//  for(int i=0; i<rowSize; i++) {
//         int sum = 0;
//         //hr row k liye sum starting me 0 hai
//         for(int j=0; j<colSize; j++) {
//             sum = sum + arr[i][j];
//         }
//         //jab saare column k element add krliye hai
//         //toh fer print krdo
//         cout << sum << endl;
//     }
    

   
   int main(){
    int arr[3][3]={{1,2,4},{12,33,55},{21,4,1}};
    int rowSize=3;
    int colSize=3;
    printRowSum(arr,rowSize,colSize);
   }

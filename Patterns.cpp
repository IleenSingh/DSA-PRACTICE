#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number";
    cin>>n;

    //half pyramid

    // for(int row=0 ; row<n ; row++){
    //     for(int col=0 ;col<row+1 ;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;

    //hollow square
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){col
    //         if(row==0||row==n-1||col==0||col==n-1){
    //             cout<<"*";
    //             }
    //             else{
    //                 cout<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }


    //inverted half pyramid
    // for(int row=0;row<n;row++){
    //      for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    // }
    // cout<<endl;
    // }

    //holloe half pyramid
    // for(int row = 0 ; row < n ;row++){
    //     for(int col=0 ; col< row+1 ; col++){
    //         if(row==0 || row==n-1 || col==0 || row==col){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //hollow inverted half pyramid
    for(int row=0;row<n;row++){
         for(int col=0;col<n-row;col++){
           if(row==0||row==n-1||col==0){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
    }
    cout<<endl;

}
}










// #include<iostream>
// using namespace std;


//     void invertedHollowPyramid(int n)
//     {
//         for(int row=0;row<n ;row++){
//             //for spaces
//             for(int col=0 ; col<row ;col++){
//                 cout<<" ";
//             }

//             //for stars
//             for(int col=0  ;col<n-row ;col++){
//                 if(row==0||row==n-1||col==0||col==n-row-1){
//                     cout<<"* ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }

//             }
//             cout<<endl;
//         }
//     }


// int main(){
//     int n;
//     cin>>n;
//     invertedHollowPyramid(n);
//     return 0;

// }
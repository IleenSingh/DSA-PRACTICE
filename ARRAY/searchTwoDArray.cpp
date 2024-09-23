#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> search2DArray(int arr[][4] ,int rowSize ,int colSize ,int target){
    vector<vector<int>> ans;
    for(int row=0 ;row<rowSize ;row++){
        for(int col=0 ;col<colSize ;col++){
            if(arr[row][col]==target){
                ans.push_back({row,col});
                cout<<"index"<<"["<<row<<","<<col<<"]"<<" have"<<" "<<target;
            }
        }
    
    }
    return ans;
}




 int main(){
    int arr[3][4]={{1,2,3,4},{12,33,44,55},{21,31,4,1}};
    int rowSize=3;
    int colSize=4;
    int target =33;
    search2DArray(arr,rowSize,colSize,target);
    
 }








// bool version
// #include <iostream>
// #include <vector>
// using namespace std;

// bool search2DArray(int arr[][4], int rowSize, int colSize, int target) {
//     bool found = false;  // To indicate if the target is found
//     vector<vector<int>> ans;  // Vector to store the indices of elements that match the target

//     // Iterate through each element in the 2D array
//     for (int row = 0; row < rowSize; row++) {
//         for (int col = 0; col < colSize; col++) {
//             if (arr[row][col] == target) {  // If the element matches the target
//                 ans.push_back({row, col});  // Store the indices in the vector
//                 cout << "Index [" << row << "][" << col << "] has " << target << endl;
//                 found = true;
//             }
//         }
//     }

//     // Print all found indices
//     if (!ans.empty()) {
//         cout << "Found indices: ";
//         for (const auto& indices : ans) {
//             cout << "[" << indices[0] << "][" << indices[1] << "] ";
//         }
//         cout << endl;
//     }

//     return found;  // Return whether the target was found
// }

// int main() {
//     int arr[3][4] = {{1, 2, 3, 4}, {12, 33, 44, 55}, {21, 31, 4, 1}};
//     int rowSize = 3;
//     int colSize = 4;
//     int target = 21;

//     bool found = search2DArray(arr, rowSize, colSize, target);

//     if (found) {
//         cout << "Target " << target << " was found in the array." << endl;
//     } else {
//         cout << "Target " << target << " was not found in the array." << endl;
//     }

//     return 0;
// }

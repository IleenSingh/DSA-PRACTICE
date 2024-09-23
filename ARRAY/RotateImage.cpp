#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>&matrix){
    int m=matrix.size();
    int n=matrix[0].size();

     for(int i=0;i<n;i++){
            for(int j=i;j<n;j++)
                swap(matrix[i][j], matrix[j][i]);
        }

        // step 2. reverse row wise
        for(int i=0;i<n;i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
    
    
//my version of transpose but optimal swap wala h 
//     for(int col=0;col<n ;col++){
//         for(int row=col;row<m;row++){
//             matrix[col][row];
//         }
//     }

// }
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
   for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
}
}
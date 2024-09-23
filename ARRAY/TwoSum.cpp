#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int>> checkTwoSum(int arr[], int n, int target) {
    vector<pair<int, int>> ans;  // Vector to store all pairs

    // Checking two sum
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // j starts from i+1 to avoid using the same element twice
            if (arr[i] + arr[j] == target) {
                ans.push_back(make_pair(arr[i], arr[j])); // Add the pair to the vector


                //without using vector thi pe print krwane se bhi saare pair print hojaenge
            }
        }
    }
    return ans; // Return the vector containing all pairs
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    vector<pair<int, int>> answer = checkTwoSum(arr, n, 60);

    // Print all pairs
    // for (int i = 0; i < answer.size(); i++) {
    //     cout << answer[i].first << " " << answer[i].second << endl;
    // }
    if(!answer.empty()) {
        // Printing the first pair found
        cout << answer[0].first << " " << answer[0].second << endl;
    } else {
        cout << "No two sum solution found" << endl;
    }

    return 0;
}


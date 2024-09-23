#include<iostream>
#include<vector>
using namespace std;

//two sum
vector<int> twoSum(vector<int> &arr ,int target){
    vector<int> ans;
    int n=arr.size();
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr={10, 20, 30, 40, 50};
    int target=60;
    vector<int> answer =twoSum(arr ,target);
    if (!answer.empty()) {
        cout << "[" << answer[0] << ", " << answer[1] << "]" << endl;
    } else {
        cout << "No two numbers found that add up to " << target << endl;
    }

    return 0;
}


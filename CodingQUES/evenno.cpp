#include<iostream>
#include<vector>
using namespace std;

int evenSum(vector<int> &arr ){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            sum+=arr[i];
        }
    }
    return sum;  
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int ansSum=evenSum(arr);
    cout<<"Even number sum "<<ansSum;
}
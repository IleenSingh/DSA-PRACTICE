#include<iostream>
#include<vector>
using namespace std;

int peakIndexArray(vector<int> arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ansIndex=-1;
    //store and compute method
    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            //arr[mid]>arr[mid+1]
            ansIndex=mid;
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ansIndex;
}

int main(){
    vector<int> arr={10,20,30,40,56,33,22,11,10};
    cout<<" PEAK INDEX OF ARRAY = "<<peakIndexArray(arr)<<endl;    
}
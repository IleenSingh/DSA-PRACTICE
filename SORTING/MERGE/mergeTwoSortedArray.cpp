#include<iostream>
#include<vector>
using namespace std;

int mergeTwoSortedArray(int arr[] ,int a ,int brr[] ,int b ,vector<int>& ans){

    //phle do pointer lenge jo dono array mai work krega jo chota  woh print hote jaega
    int i=0;
    int j=0;

    while(i<a && j<b){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }

    //case when one array element are over and second array has still some elements
    //for arr
    while(i<a){
         ans.push_back(arr[i]);
            i++;
    }
    //for brr
    while(j<b){
        ans.push_back(brr[j]);
         j++;
    }
}




int main(){
    int arr[] = {10,24,45,66,73,79};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    int brr[] ={20,33,44,55};
    int sizeBrr = sizeof(brr) / sizeof(brr[0]);

    vector<int> ans;
    mergeTwoSortedArray(arr,sizeArr,brr,sizeBrr,ans);
    for(int i : ans){
        cout<<i<<" ";
    }
}
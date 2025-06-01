/*
Quick Sort
Difficulty: MediumAccuracy: 55.23%Submissions: 271K+Points: 4Average Time: 15m
Implement Quick Sort, a Divide and Conquer algorithm, to sort an array, arr[] in ascending order. Given an array, arr[], with starting index low and ending index high, complete the functions partition() and quickSort(). Use the last element as the pivot so that all elements less than or equal to the pivot come before it, and elements greater than the pivot follow it.

Note: The low and high are inclusive.

Examples:

Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9]
Explanation: After sorting, all elements are arranged in ascending order.
Input: arr[] = [2, 1, 6, 10, 4, 1, 3, 9, 7]
Output: [1, 1, 2, 3, 4, 6, 7, 9, 10]
Explanation: Duplicate elements (1) are retained in sorted order.
Input: arr[] = [5, 5, 5, 5]
Output: [5, 5, 5, 5]
Explanation: All elements are identical, so the array remains unchanged.
Constraints:
1 <= arr.size() <= 105
1 <= arr[i] <= 105
*/
#include<iostream>
#include<vector>
using namespace std;

 void quickSort(vector<int>&arr, int start, int end) {
        // code here
        int i = start-1;
        int j = start;
        int pivot = end;
        //base case
        if(start>=end) return;
        
        //main logic
        while(j<pivot){
            if(arr[j] < arr[pivot]){
                i++;
                swap(arr[i] ,arr[j]);
            }
            //loop end hote hi j bhi increment hoga 
            //means aagar case fail bhi hua tbhi j increment hoga 
            j++;
        }
        //ab jab j out of bound chle jaege tbb i ko increment krke 
        //uske baad hi swap krenge 
        i++;
        swap(arr[i] ,arr[pivot]); //pivot ko shi pos mai la rhe hai 
        
        //ab left array  k liye recursive call krenge 
        quickSort(arr ,start ,i-1); //i-1 quki i hi pivot h 
        //right array k liye recursive call
        quickSort(arr ,i+1 ,end);
        
    }

    int main(){
        vector<int> arr = {4, 1, 3, 9, 7};
        int start =0;
        int end = arr.size() -1 ;
        quickSort(arr ,start,end);
        for(int i : arr){
            cout<<i<<" ";
        }
    }
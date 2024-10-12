#include<iostream>
using namespace std;


int bs(int nums[], int start, int end, int x) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Check if x is present at mid
        if (nums[mid] == x) {
            return mid;  // Found the element
        } else if (nums[mid] < x) {
            start = mid + 1;  // Ignore left half
        } else {
            end = mid - 1;  // Ignore right half
        }
    }
    return -1;  // x not found
}


//main function 
int unboundedSRH(int nums[] , int n , int x){
    int i=0;
    int j=1;
    while(nums[j]<x){
        i=j;
        j=j*2;
    }

    return bs(nums , i ,j ,x);
}


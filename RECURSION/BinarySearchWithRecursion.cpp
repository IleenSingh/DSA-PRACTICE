#include<iostream>
using namespace std;

int binarySearchWithRecursion(int arr[] , int s ,int e ,int target){
     
     //base case => jab start point end se aage chle jaaye 
     if(s>e) return -1;

     //finding mid
     int mid =s+(e-s)/2;

     //1 st case mai solve krungi => jab target mid k equal hojaye then simply return krrdo mid
     if(target == arr[mid]){
        return mid ;
     }

     //recursive call -> do function honge 
     //1st when target bada hojaega mid means we have to increase the starting element in order to find the target
     if(target>arr[mid]){
        //now calling function again when start is one after the mid
        return binarySearchWithRecursion(arr , mid+1 , e , target);
     }

     //2nd case when target is smaller then mid , we have to decrease the mid in order to find the target
     if(target < arr[mid]){
        //now calling function again for end to decrease it
        return binarySearchWithRecursion(arr , s ,mid -1 ,target);
     }


}
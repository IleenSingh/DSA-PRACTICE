#include<iostream>
using namespace std;

bool searchInArray(int arr[] , int index , int size , int target){
    //base case 
    //not found the target - > jab array end hojaega tb rukh jaenge
    if(index >= size){
        return false;
    }
    //found the target also our part 1st case solve
    if(arr[index] == target){
        return true;
    }
    //recursive relation searching all element
    bool answer = searchInArray(arr,index+1 ,size,target);
    //increment krte jaenge index ko saare indexes mai traverse krne k liye
    return answer;
}
 
 int main(){
    int arr[] = {10 ,20 ,30 ,40 ,50};
    int size =5;
    int index =0;
    int target = 50;
    cout<<"Answer -> "<<searchInArray(arr,index,size,target);
    return 0;//  :)
 }
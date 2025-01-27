#include<iostream>
#include<climits>
using namespace std;

void maxInArray(int arr[] ,int size ,int index , int &maxi){
    //base case -> jab array end hojaega tbb rukhna hai 
    if(index==size) return;

    //recursive relation 
    //1st case ->first index se compare krenge max element se ki kon sa max hai
    maxi = max(maxi , arr[index]);

    //recursion part
    maxInArray(arr , size ,index+1 ,maxi);
}

int main(){
    int arr[] = {1034 ,3456 ,6432 ,4567 ,5678 ,1000};
    int size =6 ;
    int index =0;
    int maxi =INT_MIN;
    maxInArray(arr , size ,index ,maxi);
    cout<<"maximum element -> "<<maxi;
}
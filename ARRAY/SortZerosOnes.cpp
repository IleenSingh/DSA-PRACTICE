#include<iostream>
#include<algorithm>
using namespace std;

int sortZeroOnes(int arr[] ,int n){
    //counting method

    int zeroCount=0;
    int oneCount=0;
    //for counting number of zeros and ones
    for(int i=0 ;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
       if(arr[i]==1){
            oneCount++;
        }
    }
    //arranging zeros and ones
    for(int i=0 ;i<zeroCount ;i++){
        arr[i]=0;
    }
    for(int i=zeroCount ;i<n ;i++){
        arr[i]=1;
    }

    //sort method(inbuilt)
    //  sort(arr,arr+n);

    //fill method
    // fill(arr,arr+zeroCount,0);
    // fill(arr+zeroCount,arr+n,1);

   

}


int main(){
    int arr[]={0,0,1,1,1,0,1};
    int n=7;
    sortZeroOnes(arr,n);
    cout<<"sorted order ";
    for(int i=0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}
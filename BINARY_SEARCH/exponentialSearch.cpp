#include <iostream>
using namespace std;

int bs(int nums[] , int start ,int end , int x){
    while(start<=end){
        int  mid =(start+end)>>1;
        if(nums[mid]==x){
            return mid;
        }
        else if(nums[mid] < x){
            start = mid+1 ;
        }
        else{
            end =mid-1;
        }
    }
    return -1;
}

//MAIN FUNCTION 

int expSearch(int nums[] , int n , int x){
     //base condition 
     if(nums[0] == x) return 0;

     int i=1;
     while(i<n && nums[i]<=x){
        i=i<<1; //toh large spaces pe jump krega
     }
     //ab jo space niklega uss space pe binary search krenge
     return bs(nums , i/2 , min(i,n-1) , x);

}

int main(){
    int nums[] ={3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(nums) / sizeof(int);
    int x=13;
    int ans = expSearch(nums , n ,x);
    cout<<"The index of the x is "<<ans<<endl;
}
#include<iostream>
using namespace std;

void findFirstOccurence(int arr[] ,int n,int target ,int &ansIndex){
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            ansIndex=mid;//ek baar ans ko store krrlenge jab toh koi ni value nah aaye
            e=mid-1;//kyuki left mai or occurence aaskta hai
        }
        if(target>arr[mid]){
            s=mid+1;//mid se aage h target
        }
        if(target<arr[mid]){
            e=mid-1;//mid k piche h target
        }
        mid =s+(e-s)/2;
    }
}

void findLastOccurence(int arr[],int n,int target ,int &ansIndex){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==target){
            ansIndex=mid;
            s=mid+1;
        }
        if(arr[mid]>target){
            e=mid-1;
        }
        if(arr[mid]<target){
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
}

int main(){
    int arr[]={10,15,20,20,20,20,70,100};
    int n=8;
    int target=20;
    int ansIndex=-1;
    // findFirstOccurence(arr,n,target,ansIndex);
    findLastOccurence(arr,n,target,ansIndex);

    cout<<"First Occurence -> "<<ansIndex<<endl;
}
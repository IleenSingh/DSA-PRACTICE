#include<iostream>
#include<vector>

using namespace std;

void firstOcc(vector<int> arr ,int n ,int target ,int &ansIndex){
     int s=0;
     int e=n-1;
     int mid=s+(e-s)/2;

     while(s<=e){
        if(arr[mid]==target){
            //store its index value
            ansIndex=mid;
            e=mid-1;
        }
        if(arr[mid]<target){
            s=mid+1;
        }
        if(arr[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
     }
}

void lastOcc(vector<int> arr ,int n ,int target ,int &ansIndex){
     int s=0;
     int e=n-1;
     int mid=s+(e-s)/2;

     while(s<=e){
        if(arr[mid]==target){
            //store its index value
            ansIndex=mid;
            s=mid+1;
        }
        if(arr[mid]<target){
            s=mid+1;
        }
        if(arr[mid]>target){
            e=mid-1;
        }
        mid=s+(e-s)/2;
     }
}


int main(){
    vector<int> arr ={10,20,30,30,30,40,74};
    int n=arr.size();
    int target=30;
    int firstOccIndex=-1;
    firstOcc(arr,n,target,firstOccIndex);
    int lastOccIndex=-1;
    lastOcc(arr,n,target,lastOccIndex);
   // cout<<"The first occ = "<<firstOccIndex<<endl<<"The last occ = "<<lastOccIndex<<endl;
    int totalOccurence=(lastOccIndex-firstOccIndex)+1;
    cout<<"Total Occurence of the target value = "<<totalOccurence;
}
//vector<int> temp;
//temp[0]=firstOccIndex;
//temp[1]=lastOccIndex;
//return temp;
#include<iostream>
#include<vector>
using namespace std;

int oddOccElement(vector<int>& arr){
    int s=0;
    int n=arr.size();
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        //single element case
        if(s==e){
            return arr[s];
        }

        // to store dummy values we put mid mid-1 and mid+1 in different variables
        int currValue =arr[mid];
        int leftValue = -1;
        int rightValue = -1;

        if(mid-1>=0){
            leftValue = arr[mid-1];
        }
        if(mid+1<n){
            rightValue =arr[ mid+1];
        }

        //if both mid-1 and mid+1 dont match the element than the element itself is the answer
        if(currValue!=leftValue && currValue!=rightValue){
            return currValue;
        }

        // if the answer is in the left side of the element
        if(currValue==leftValue && currValue!=rightValue){
            int startingIndex=mid-1;//left side h starting index
            if(startingIndex & 1)//agar index odd h toh left mai h answer
            {
                e=mid-1;
            }
            else{
                s=mid+1;//ni toh right mai agar even h toh
            }
        }
    
            // if the answer is in the right side of the element

        else if(currValue!=leftValue && currValue==rightValue){
            int startingIndex=mid;//left side h starting index
            if(startingIndex & 1)//agar index odd h toh left mai h answer
            {
                e=mid-1;
            }
            else{
                s=mid+1;//ni toh right mai agar even h toh
            }
        }
        mid=s+(e-s)/2;  
    }
    return -1;
}

int main ()
{
    vector<int> arr={1,1,3,3,4,4,5,7,7,9,9};
    // int n=arr.size();
    int ans=oddOccElement(arr);
    cout<<"ODD OCCURING ELEMENT IS -> "<<ans<<endl;
}


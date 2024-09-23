#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int missingNumber(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        int ansIndex = -1;
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
    
        while(s <= e) {
            int number = arr[mid];
            int index = mid;
            int diff = number - index;
            if(diff == 0) {
                //right me ans milega
                s = mid+1;
            }
            else if(diff == 1) {
                //store and compute
                ansIndex = index;
                //before if any case ans present ho
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
       //extreme case for arr like[0,1]
        if(ansIndex == -1) {
            return n;
        }
        return ansIndex;
    };


    int main(){
        vector<int>arr={0,1};
        int ans=missingNumber(arr);
        cout<<"Missing Number of the array -> "<<ans<<endl;

    }
/*Aggressive Cows
Difficulty: HardAccuracy: 59.57%Submissions: 73K+Points: 8
You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
The first line of input contains two space-separated integers n and k.
The second line contains n space-separated integers denoting the position of the stalls.

Input: stalls[] = [10, 1, 2, 7, 5], k = 3
Output: 4
Explanation: The first cow can be placed at stalls[0],
the second cow can be placed at stalls[1] and
the third cow can be placed at stalls[4].
The minimum distance between cows, in this case, is 4, which also is the largest among all possible ways.

Example 1:

Input:
n=5 
k=3
stalls = [1 2 4 8 9]
Output:
3

Explanation:
The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows, in this case, is 3, 
which also is the largest among all possible ways.

Your Task:
Complete the function int solve(), which takes integer n, k, and a vector stalls with n integers as input and returns the largest possible minimum distance between cows.

Expected Time Complexity: O(n*log(10^9)).
Expected Auxiliary Space: O(1).

Constraints:
2 <= n <= 10^5
2 <= k <= n
0 <= stalls[i] <= 10^9

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>&stalls , int k , int mid){
    //ek count chalayenge then akhri mai k se compare krenge ki sarri cows place hui ki ni 
    int count =1;
    //one isliye kyuki distance measure k liye ek cow placed rhti h hmesha
    int fPosition = stalls[0] ;    
    //jis position se cows k bich se distance shuru krenge napna
    for(int i =1; i<stalls.size() ;i++){
        //2nd index se placing start krenge
        if(stalls[i] - fPosition >= mid){
            //agar inn dono ka subraction mid k equal hua toh ek or cow place hojaegi or count badh jaega
            count++;
            //ab jha dusri cow place hui h wha se 3re ka distance nikalenge
            fPosition = stalls[i];
        }
        if (count==k)  return true; // means hamari sazari cows place higyi hai 
    }
    //for loop end 
    return false;

}

//main function 
int agressiveCows(vector<int>&stalls , int k , int n){
    //array ko sort krenge kyuki number line mai saare element sorted order mai rhte h 
    sort(stalls.begin() , stalls.end());
    int start =0;
    //stalls[stalls.size()-1] mtlb stalls [5] = 9 , stalls of first index =1 ->>> 9-1=8
    int end = stalls[stalls.size()-1] - stalls[0];
    int ans=-1;

    while(start<=end){
        int mid =start +(end - start) /2;
        if(isPossible(stalls , k , mid)){
            ans=mid;
            start = mid+1;
        }
        else{
            end= mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> stalls = {1,2,4,8,9};
    int k =3;
    int n =stalls.size();
    int ans = agressiveCows(stalls ,k ,n);
    cout<<"the minimum distance between any two of them is the maximum possible is "<<ans;

}
/*Problem Statement:
LAKSHAY BHAIYA needs to chop down M metres of wood.
It is an easy job for him since he has a nifty new wood-cutting machine that can take down forests like wildfire.
However, LAKSHAY BHAIYA is only allowed to cut a single row of trees.

LAKSHAY BHAIYA's machine works as follows:
He sets a height parameter H (in meters), and the machine raises a giant sawblade to that height 
and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). 
He then takes the parts that were cut off.

He is ecologically minded, so he doesn't want to cut off more wood than necessary. 
That's why he wants to set his sawblade as high as possible. 
Help LAKSHAYA find the 'maximum integer height of the sawblade' that still allows him to cut off 'at least M metres of wood'.

Example 01:
Input:
4 7
20 15 10 17

Output:
15

📌Observation:
Number of trees/Array's size = N = 4
At least M metres of wood = M = 7
Trees Array = trees [20, 15, 10, 17]


OPTIMAL APPROACH: Define search space and predicate function 
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 bool isPossibleSol(vector<long long int>trees , long long int m ,long long int mid){
    long long int woodCollected = 0;
    for(int i=0 ;i<trees.size() ; i++){
        //minus wale case k liye condition dal de rhe h taaki jinko neglect krna h woh include nah ho sum mai 
        if(trees[i] > mid){
            woodCollected += trees[i] - mid;
        }
    }

    return woodCollected >=m ;//agar hoga toh true return krega
 }

 long long int maxSawbladeHeight(vector<long long int>trees , long long int m){
    long long int start = 0 , end , ans =-1;
    end = *max_element(trees.begin() , trees.end());

    while(start<=end){
        long long int mid = start +(end - start) /2;
        if (isPossibleSol(trees , m , mid)){
            ans=mid;
            start=mid+1;
        }
        else{
            end= mid-1;
        }
    }
    return ans;
 }


int main(){
    long long int n ,m ;
    cin>>n>>m;
    vector<long long int> trees;
    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }

    cout<<maxSawbladeHeight(trees , m)<<endl;
}
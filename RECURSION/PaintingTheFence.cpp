/*Painting Fence Algorithm
Given a fence with n posts and k colors, the task is to find out the number of ways of painting the fence so that not more than two consecutive posts have the same color.

Examples:

Input: n = 2, k = 4
Output: 16
Explanation: We have 4 colors and 2 posts.
Ways when both posts have same color: 4 
Ways when both posts have diff color: 4(choices for 1st post) * 3(choices for 2nd post) = 12
*/
#include<iostream>
using namespace std ;

int PaintingWays(int n , int k ){
    //base case for n=1 and n=2 
    if (n==1) {
        return k;
    }
    if(n==2){
        return k + k*(k-1); //same plus different
    }

    //baaki cases ka
    int ans = (k-1) *(PaintingWays(n-1 , k) + PaintingWays(n-2 ,k));
    return ans;
}

int main(){
    int n =3 ;
    int k =3 ;
    int ans = PaintingWays(n ,k);
    cout<<"Number Of Ways -> "<<ans<<endl;
}
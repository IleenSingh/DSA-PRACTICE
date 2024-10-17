/*Allocate Minimum Pages
Difficulty: MediumAccuracy: 35.51%Submissions: 211K+Points: 4
You have n books, each with arr[i] a number of pages. m students need to be allocated contiguous books, with each student getting at least one book.
Out of all the permutations, the goal is to find the permutation where the sum of the maximum number of pages in a book allotted to a student should be the minimum, out of all possible permutations.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

Examples:

Input: n = 4, arr[] = [12, 34, 67, 90], m = 2
Output: 113
Explanation: Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113, which is selected as the output 
Input: n = 3, arr[] = [15, 17, 20], m = 5
Output: -1
Explanation: Allocation can not be done.
Expected Time Complexity: O(n logn)
Expected Auxilliary Space: O(1)

Constraints:
1 <=  n, m <= 105
1 <= arr[i] <= 106                                 

*/

#include<iostream>
#include<numeric>
#include<algorithm>
using namespace std;

//how to check if we got a possible solution or not
 
 bool isPossible(int A[] ,int N,int M,int sol){
    int pageSum=0;
    int c=1;
    //loop start krenge jisme book k pages ko plus krke compare krenge mid se
    for(int i=0 ; i<N ; i++){
        if(A[i] > sol){
            return false; //12+34+67+90 =203>113 kind off aisa kch sum bada ho jese
        }

        //allot student sum se chote honge tbb
        if(pageSum + A[i] >sol){
            c++;
            //ab bhar gye h mtlb ab overflow horha h sum mid se 
            pageSum = A[i];

            //student khtm books bchi h but
            if(c > M){
                return false;
            }
        }
        else{
            //jab bhi if ki condition mtlb sol bada rhega tb books isme add hote jaenge means 12,34,67,90 k case mai 12 34 67 add hue honge phir count bada hoga 
            pageSum += A[i];
        }
    }
    return true;
 }


int findPages(int A[] , int N , int M){
    //agar student hi books se zyada hogye toh allocation ni ho paegi
    if(M>N) return -1;

    int start = 0;
    int end =accumulate(A ,A+N ,0);
    int ans=-1;
    //binary search lagayenge mid nikl k minimum number of pages nikalne k liye
    while(start<=end){
        int mid = (start+end)>>1;
        if(isPossible(A , N , M ,mid)){
            ans = mid;
            end=mid-1;
        }
        else{
            //not possible wala case
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int A[] ={12,34,67,90};
    int N=4;
    int M =2;
    int ans = findPages(A ,N ,M);
    cout<<"The sum of the maximum number of pages in a book allotted to a student should be the minimum is -> "<<ans;
}
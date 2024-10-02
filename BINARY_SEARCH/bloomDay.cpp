/*1482 MINIMUM NUBER OF DAYS TO MAKE m BOUQUETS
You are given an integer array bloomDay, an integer m and an integer k.

You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.

The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.

Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

 

Example 1:

Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3
Explanation: Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.
We need 3 bouquets each should contain 1 flower.
After day 1: [x, _, _, _, _]   // we can only make one bouquet.
After day 2: [x, _, _, _, x]   // we can only make two bouquets.
After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.
Example 2:

Input: bloomDay = [1,10,3,10,2], m = 3, k = 2
Output: -1
Explanation: We need 3 bouquets each has 2 flowers, that means we need 6 flowers. We only have 5 flowers so it is impossible to get the needed bouquets and we return -1.


*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canWeMakeMBouquetsWithDDays(vector<int> &bloomDay, int m, int k, int D)
    {
        int counter = 0;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            // check whether the ith flower is bloomed or not
            if (bloomDay[i] <= D)
            {
                // bloom ho gaya hoga
                counter++;
            }
            if (counter == k)
            {
                m--; // i can make a Bouquet
                counter = 0;
                if (m == 0)
                    break;
            }

            // not bloomed case
            if (bloomDay[i] > D)
                counter = 0;
        }
        return m == 0; 
    }


    //main function


    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long int requirement = (long long int)m * (long long int)k;
        if (bloomDay.size() < requirement)
            return -1;

        int start = *min_element(bloomDay.begin(), bloomDay.end()); // at least 1 flower is bloomed
        int end = *max_element(bloomDay.begin(), bloomDay.end());   // all flowers are bloomed, pkka bna lunga
        int ans = 0;
        while (start <= end)
        {
            int mid = (start + end) >> 1;
            int day = mid;
            if (canWeMakeMBouquetsWithDDays(bloomDay, m, k, day))
            {
                ans = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return ans;
    }

    int main(){
        vector<int> bloomDay={1,10,3,10,2};
         int m = 3;
         int k = 1;
         int ans = minDays(bloomDay , m ,k);
         cout<<"Total days to make a bouquet "<<ans<<endl;


    }
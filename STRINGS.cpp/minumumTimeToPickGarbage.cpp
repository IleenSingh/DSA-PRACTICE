//https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/
/*You are given a 0-indexed array of strings garbage where garbage[i] represents the assortment of garbage at the ith house. garbage[i] consists only of the characters 'M', 'P' and 'G' representing one unit of metal, paper and glass garbage respectively. Picking up one unit of any type of garbage takes 1 minute.

You are also given a 0-indexed integer array travel where travel[i] is the number of minutes needed to go from house i to house i + 1.

There are three garbage trucks in the city, each responsible for picking up one type of garbage. Each garbage truck starts at house 0 and must visit each house in order; however, they do not need to visit every house.

Only one garbage truck may be used at any given moment. While one truck is driving or picking up garbage, the other two trucks cannot do anything.

Return the minimum number of minutes needed to pick up all the garbage.

 

Example 1:

Input: garbage = ["G","P","GP","GG"], travel = [2,4,3]
Output: 21
Explanation:
The paper garbage truck:
1. Travels from house 0 to house 1
2. Collects the paper garbage at house 1
3. Travels from house 1 to house 2
4. Collects the paper garbage at house 2
Altogether, it takes 8 minutes to pick up all the paper garbage.
The glass garbage truck:
1. Collects the glass garbage at house 0
2. Travels from house 0 to house 1
3. Travels from house 1 to house 2
4. Collects the glass garbage at house 2
5. Travels from house 2 to house 3
6. Collects the glass garbage at house 3
Altogether, it takes 13 minutes to pick up all the glass garbage.
Since there is no metal garbage, we do not need to consider the metal garbage truck.
Therefore, it takes a total of 8 + 13 = 21 minutes to collect all the garbage.*/

#include<iostream>
#include<vector>
using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        //P truck
        int pickP = 0;
        int travelP = 0;
        int lastHouseP = 0;

        //M Truck
        int pickM = 0;
        int travelM = 0;
        int lastHouseM = 0;
        
        //G Truck
        int pickG = 0;
        int travelG = 0;
        int lastHouseG = 0;

        //let's travel to the street of houses
        for(int i=0; i<garbage.size(); i++) {
            //ith House
            string currHouse = garbage[i];
            //let dive in into current house and see the type of garbage present
            for(int j=0; j<currHouse.length(); j++) {
                char garbageType = currHouse[j];
                if(garbageType == 'P') {
                    pickP++;
                    //yaha tk toh mera P truck pkka aaya h, toh let's tore it
                    lastHouseP = i;
                }
                if(garbageType == 'M') {
                    pickM++;
                    lastHouseM = i;
                }
                if(garbageType == 'G') {
                    pickG++;
                    lastHouseG = i;
                }
            }
        }


         //let's calculate travet time for P
            for(int i=0; i<lastHouseP; i++) {
                travelP = travelP + travel[i];
            }



             //let's calculate travet time for G
            for(int i=0; i<lastHouseG; i++) {
                travelG = travelG + travel[i];
            }


             //let's calculate travet time for M
            for(int i=0; i<lastHouseM; i++) {
                travelM = travelM + travel[i];
            }


            int totalPickingTime = pickP + pickM + pickG;
            int totalTravelTime = travelP + travelG + travelM;

            int totalTime = totalPickingTime + totalTravelTime;
            return totalTime;

    }


    int main(){
        vector<string> garbage = {"G","P","GP","GG"};
        vector<int> travel = {2,4,3};
        cout<<"the minimum number of minutes needed to pick up all the garbage -> "<<garbageCollection(garbage , travel);

    }
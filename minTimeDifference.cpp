#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
using namespace std;

//function to convert time into minutes
int timeToMinutes(const string& time) {
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));
    return hours * 60 + minutes;
}

int findMinDifference(vector<string>& timePoints) {
    vector<int> minutes;
    
    // Convert time strings to minutes and store in a vector
    for (const string& time : timePoints) {
        minutes.push_back(timeToMinutes(time));
    }
    
    // Sort the times in ascending order
    sort(minutes.begin(), minutes.end());
    
    // Initialize the minimum difference as a large number
    int minDiff = INT_MAX;
    
    // Compute the difference between consecutive times
    for (int i = 1; i < minutes.size(); ++i) {
        minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
    }
    
    // Compute the circular difference between the first and last time
    int circularDiff = 1440 - (minutes.back() - minutes.front());
    minDiff = min(minDiff, circularDiff);
    
    return minDiff;
}

int main(){
    vector<string> timePoints = {"00:00","23:59","00:00"};
    cout<<"Minimum Time Difference -> "<<findMinDifference(timePoints)<<endl;
}
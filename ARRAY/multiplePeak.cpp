#include <iostream>
#include <vector>

using namespace std;

// Function to find and return peaks in an array
vector<int> findPeaks(const vector<int>& arr) {
    vector<int> peaks;
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        // Check if the current element is a peak
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            peaks.push_back(arr[i]);
        }
    }

    return peaks;
}

int main() {
    vector<int> arr = {5, 10, 5, 7, 4, 3, 5};
    vector<int> peaks = findPeaks(arr);

    cout << "Peaks: ";
    for (int peak : peaks) {
        cout << peak << " ";
    }
    cout << endl;

    return 0;
}
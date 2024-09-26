// You have a sorted box of numbers stored in an integer ancay A, and you want to find all the "mini boxes" (subarrays) that meet a special rule. This rule says that the sum of the smallest and biggest number in each mini box must be less than or equal to a given number X Remember, the original box is already sorted, so the smallest number is always at the beginning, and the biggest one is at the end of each mini bor you create Your task is to find and return an integer value representing the number of mini lackes that can be made which follow the rule.
// Input Specification:
// input1: An integer N. representing size of array 
// input2: An integer X, representing the comparision value.
// imput3: An integer array A representing the sorted box of numbers.

#include <iostream>
#include <vector>
using namespace std;

int countMiniBoxes(int N, int X, vector<int>& A) {
    int i = 0;
    int j = N - 1;
    int count = 0;

    // Two pointer approach
    while (i <= j) {
        // Check if the sum of smallest (A[i]) and largest (A[j]) elements satisfies the rule
        if (A[i] + A[j] <= X) {
            // All subarrays from i to j are valid
            count += (j - i + 1);
            i++; // Move the left pointer
        } else {
            j--; // Move the right pointer to reduce the sum
        }
    }

    return count;
}

int main() {
    // Input example
    int N = 4;
    int X = 5;
    vector<int> A = {1, 3 ,5, 8};  // Sorted array

    // Call the function
    int result = countMiniBoxes(N, X, A);
    cout << "Number of mini boxes: " << result << endl;

    return 0;
}

/*python

   def count_mini_boxes(N, X, A):
    i = 0
    j = N - 1
    count = 0

    # Two pointer approach
    while i <= j:
        # Check if the sum of smallest (A[i]) and largest (A[j]) elements satisfies the rule
        if A[i] + A[j] <= X:
            # All subarrays from i to j are valid
            count += (j - i + 1)
            i += 1  # Move the left pointer
        else:
            j -= 1  # Move the right pointer to reduce the sum

    return count


# Example Usage
N = 5
X = 10
A = [1, 2, 4, 6, 8]  # Sorted array

# Call the function
result = count_mini_boxes(N, X, A)
print(f"Number of mini boxes: {result}")
*/

/*Let’s dry-run the problem with the given input:

Input:

	•	 N = 4  (size of the array)
	•	 X = 5  (comparison value)
	•	Array  A = [1, 3, 5, 8]  (sorted array)

We need to find how many subarrays (or “mini boxes”) satisfy the condition where the sum of the smallest and largest element in the subarray is  \leq X .

Dry Run:

	1.	Initial Values:
	•	 i = 0 ,  j = 3  (pointing to 8)
	•	 count = 0 

Iteration 1:

	•	Condition Check:  A[i] + A[j] = 1 + 8 = 9 > 5 
	•	The condition is false, so decrement  j  to reduce the sum.
	•	New Values:  j = 2 

Iteration 2:

	•	New Values:  i = 0 ,  j = 2 
	•	Condition Check:  A[i] + A[j] = 1 + 5 = 6 > 5 
	•	The condition is false, so decrement  j .
	•	New Values:  j = 1 

Iteration 3:

	•	New Values:  i = 0 ,  j = 1 
	•	Condition Check:  A[i] + A[j] = 1 + 3 = 4 \leq 5 
	•	The condition is true, so we can form valid subarrays from  i = 0  to  j = 1 :
	•	Subarrays: [1], [1, 3] (2 subarrays).
	•	Count Update:  count = 2 
	•	Increment  i  to 1.
	•	New Values:  i = 1 ,  j = 1 

Iteration 4:

	•	New Values:  i = 1 ,  j = 1 
	•	Condition Check:  A[i] + A[j] = 3 + 3 = 6 > 5 
	•	The condition is false, so decrement  j .
	•	New Values:  j = 0 

At this point,  i = 1  and  j = 0 , so the loop terminates.

Final Count:

	•	The total number of valid subarrays is  2 .*/
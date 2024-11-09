/*https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.

We repeatedly make k duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

 

Example 1:

Input: s = "abcd", k = 2
Output: "abcd"
Explanation: There's nothing to delete.
Example 2:

Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
Explanation: 
First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


    bool areLastk_1CharSame(string&ans, char&newCh, int k) {
    int it = ans.size() - 1;
    for (int i = 0; i < k-1; i++) {
        if (newCh != ans[it]) {
            return false;
        }
        it--;
    }
    return true;
}

string removeKDuplicate(string str, int k) {
    string ans;
    for (int i = 0; i < str.size(); i++) {
        char &newCh = str[i];
        if (ans.size() < k - 1) {
            ans.push_back(newCh);
        } else {
            if (areLastk_1CharSame(ans, newCh, k)) {
                for (int j = 0; j < k - 1; j++) {
                    ans.pop_back();
                }
            } else {
                ans.push_back(newCh);
            }
        }
    }
    return ans;
}

int main() {
    string str = "pbbcggttciiippooaais";
    int k = 2;
    cout << "Result: " << removeKDuplicate(str, k) << endl;
    return 0;
}


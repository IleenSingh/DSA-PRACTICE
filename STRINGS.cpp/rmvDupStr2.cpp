/**/

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


#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {
    // Step 1: Find the first occurrence of 'part' in 's'
    size_t pos = s.find(part);

    // Step 2: Base Case - If 'part' is not found, return the string as it is
    if (pos == string::npos)
        return s;

    // Step 3: Remove 'part' from the string by erasing it
    s.erase(pos, part.length());

    // Step 4: Recursive call with the updated string
    return removeOccurrences(s, part);
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << "Result: " << removeOccurrences(s, part) << endl;
    return 0;
}

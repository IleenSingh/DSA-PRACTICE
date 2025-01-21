#include <iostream>
using namespace std;


                    //FIxed Code
int main() {
    int* ptr = nullptr;  // Initialize to nullptr to avoid wild pointer
    int value = 42;

    ptr = &value;        // Now points to valid memory
    cout << *ptr << endl;  // Output: 42

    return 0;
}


                         //Example of wild pointer

int main() {
    int* ptr;  // Wild pointer (uninitialized)

    // Dereferencing a wild pointer (dangerous!)
    cout << *ptr << endl;  // Undefined behavior

    return 0;
}

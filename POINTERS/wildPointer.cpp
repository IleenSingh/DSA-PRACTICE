/*
A wild pointer in C++ refers to a pointer that has not been initialized, and therefore, it points to an arbitrary or unknown memory location. Using a wild pointer is dangerous as it can lead to undefined behavior, such as program crashes or corrupted memory.

Key Characteristics of Wild Pointers

1.Uninitialized Pointer:

 A pointer becomes "wild" when it is declared but not initialized, meaning it doesn’t point to a specific memory location.

2.Points to Arbitrary Memory:

It may contain a random memory address, leftover from previous data in the stack.
Undefined Behavior:

3.Dereferencing a wild pointer can cause unpredictable results, including crashes or accessing invalid memory.

*/


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

// int main() {
//     int* ptr;  // Wild pointer (uninitialized)

//     // Dereferencing a wild pointer (dangerous!)
//     cout << *ptr << endl;  // Undefined behavior

//     return 0;
// }

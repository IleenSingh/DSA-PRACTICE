#include <iostream>
using namespace std;

int main() {
    int x = 42;          // Integer variable
    int *p = &x;         // Pointer to x
    int **pp = &p;       // Pointer to the pointer p

    // Print values and addresses
    cout << "Value of x: " << x << endl;                // 42
    cout << "Address of x: " << &x << endl;             // Address of x
    cout << "Value of p (Address of x): " << p << endl; // Address of x
    cout << "Value pointed by p: " << *p << endl;       // 42
    cout << "Address of p: " << &p << endl;             // Address of p
    cout << "Value of pp (Address of p): " << pp << endl; // Address of p
    cout << "Value pointed by pp (Value of p): " << *pp << endl; // Address of x
    cout << "Value pointed by *pp (Value of x): " << **pp << endl; // 42

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter first number (a): ";
    cin >> a;

    cout << "Enter second number (b): ";
    cin >> b;

    // Show before swapping
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;

    // Show after swapping
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

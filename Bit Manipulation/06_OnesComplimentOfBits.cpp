#include <iostream>
#include <limits>
#include <bitset>


using namespace std;

// # Problem:-- 
// Given an integer n, flip all its bits.
// 0 ---> 1
// 1 ---> 0

unsigned int onesComplement(unsigned int n) {
    if (n == 0) return 1; // Special case: 0's complement is 1

    // Step 1: Create a mask with all bits set to 1 up to the MSB of n
    unsigned int mask = n;
    // Brian Kernighan's trick: keep setting all bits below MSB
    mask |= (mask >> 1);
    mask |= (mask >> 2);
    mask |= (mask >> 4);
    mask |= (mask >> 8);
    mask |= (mask >> 16);

    // Step 2: XOR with mask to flip bits
    return n ^ mask;
}


int main() {
    unsigned int num;

    cout << "Enter a non-negative integer: ";
    if (!(cin >> num)) {
        cerr << "Invalid input. Please enter a non-negative integer.\n";
        return 1;
    }

    unsigned int result = onesComplement(num);
    cout << "1's complement of " << num << " is: " << result << endl;


    return 0;
}

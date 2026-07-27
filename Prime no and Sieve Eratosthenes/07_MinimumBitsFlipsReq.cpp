#include<iostream>

using namespace std;

// #Problem :--
//  Calculate the minimmum number of bit flips 
//  to convert one given number to another given number.


// Main approach to this prblm is count no of bits 
// that are different in both digit.



int main(){

    int x = 23;
    int y = 32;

    // # Method 1: Using XOR --
    cout << "Minimum number of flip to make x to y is: " <<  __builtin_popcount(x^y) << endl;

    // #Method 2: Using AND --



    return 0;
}
#include<iostream>

// # SET BIT--->
// The problem asks to count the number of 1s (set bits) 
// in the binary representation of a given integer, also known as the Hamming weight.
// built in function for this problem is --__builtin_popcount(n).
 
using namespace std;

// # Method 1: Using Built in function:
int count_set_bits1(int n){
    return __builtin_popcount(n);
}

// # Using Brian Kernighan’s Algorithm: 
int count_set_bits2(int n){
    int count = 0;
    while( n > 0){
        count ++;
        n = (n & (n-1));
    }
    return count;
}

int main(){

    cout << count_set_bits1(45) << endl;

    cout << count_set_bits1(45);

    return 0;
}

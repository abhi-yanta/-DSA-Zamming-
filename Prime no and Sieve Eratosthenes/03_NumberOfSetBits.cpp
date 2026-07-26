#include<iostream>

// # SET BIT--->
// The problem asks to count the number of 1s (set bits) 
// in the binary representation of a given integer, also known as the Hamming weight.
// built in function for this problem is --__builtin_popcount(n).
 
using namespace std;

int count_set_bits(int n){
    return __builtin_popcount(n);
}

int main(){

    cout << count_set_bits(45);

    return 0;
}

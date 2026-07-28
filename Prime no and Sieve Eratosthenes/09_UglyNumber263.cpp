#include<iostream>

using namespace std;

// An ugly number is a positive integer which does not 
// have a prime factor other than 2, 3, and 5.

// Given an integer n, return true if n is an ugly number.

bool isUgly(int n) {
        if(n == 0) return false;
        while(n % 2 == 0) n /= 2;
        while(n % 3 == 0) n /= 3;
        while(n % 5 == 0) n /= 5;
        return (n == 1); // This means
        //if(n==1) return true;
        //else return false;
    }

int main(){

    int n = 6;

    cout << isUgly(n);

    return 0;
}
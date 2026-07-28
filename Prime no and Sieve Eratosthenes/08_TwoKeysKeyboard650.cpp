#include<iostream>
#include<vector>
#include<cmath>


using namespace std;

// There is only one character 'A' on the screen of a notepad. 
// You can perform one of two operations on this notepad for each step:
// Copy All: You can copy all the characters present on the screen 
// (a partial copy is not allowed).
// Paste: You can paste the characters which are copied last time.
// Given an integer n, return the minimum number of operations to 
// get the character 'A' exactly n times on the screen.

// # Method 1:--->
int greatestDivisor (int n){
        for(int i = n/2; i >=1; i--){ // ~~~O(n)
            if(n%i == 0) return i;
        }
        return 1;
    } 
    int minSteps(int n) {
        int count = 0;
        while(n > 1){
            int highfact = greatestDivisor(n);
            count += (n/highfact);
            n = highfact;
        }
        return count;
    }


// # Method 2:--->
bool isPrime(int n){
    int fact = 0;
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            fact = i;
            return false ;
        }
    }
    return true;
}

int greatestDivisor1 (int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return n/i;
    }
    return 1;
} 
int minSteps1(int n) {
    int count = 0;
    while(n > 1){ // O(logn) # Worst Case
        if(isPrime(n)){ // O(sqrt(n))
            count += n;
            break;
        }
        int highfact = greatestDivisor1(n); // O(sqrt(n))
        count += (n/highfact);
        n = highfact;
    }
    return count;
}


int main(){

    int n = 90;
    cout << minSteps(n) << endl;
    cout << minSteps1(n) ;

    return 0;
}


// Time Complexity -- O(sqrt(n)logn).
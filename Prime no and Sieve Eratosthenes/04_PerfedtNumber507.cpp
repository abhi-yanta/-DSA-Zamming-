#include<iostream>
#include<cmath>


using namespace std;

// A perfect number is a positive integer that is equal to the sum 
// of its positive divisors, excluding the number itself. A divisor of an 
// integer x is an integer that can divide x evenly.


bool checkPerfectNumber(int n) {
        
        int sum = 0;
        for(int i = 1; i < sqrt(n); i++){
            if(n % i == 0) sum += i;
        }
        for(int i = sqrt(n); i > 1; i--){
            if(n % i == 0) sum += n/i;
        }
        return (sum == n);
    }


int main(){

    int n = 28;
    cout << checkPerfectNumber(n);

    return 0;
}
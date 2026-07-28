#include<iostream>
#include<cmath>

using namespace std;

int fact = 0;
// # Method 1:--
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i < n-1; i++){
        if(n%i == 0) return false;
    }
    return true;
}
// # Method 2:--
bool isPrime1(int n){
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            fact = i;
            return false ;
        }
    }
    return true;
}

int main(){

    cout << isPrime(9) << endl;
    cout << isPrime1(9) << endl;
    cout << fact ;
    


    return 0;
}

// # Note :--
//   Prime have only two factors.
//   Whereas composite have even numbers of factor except perfect squares.
//   If any number has factor except 1 and n, then for sure half of 
//   the factor will lie before <= sqrt(n).
 
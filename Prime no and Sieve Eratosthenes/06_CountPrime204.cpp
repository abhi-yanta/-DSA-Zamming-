#include<iostream>
#include<vector>
#include<cmath>



using namespace std;
// # Sieve of Eratostenes.
// Given an integer n, return the number of 
// prime numbers that are strictly less than n.
 
void fillSieve(vector<bool> & sieve){
        int n = sieve.size() - 1;
        for (int i = 2; i <= sqrt(n); i++){
            for(int j = i*2; j <= n; j += i){ // ~~~O(n)
                sieve[j] = 0;
            }
        }
    }
    int countPrimes(int n) {
        if(n <= 2) return 0;
        n = n-1;
        int count = 0;
        vector <bool> sieve(n+1, 1); // 1 means prime, 0 means not prime
        fillSieve(sieve);
        sieve[0] = 0;
        sieve[1] = 0;
        for(int i = 2; i <= n; i++){
            if(sieve[i] == 1) count++;
        }
        return count;
    }



int main(){

    int n = 100;
    cout << countPrimes(n);

    return 0;
}
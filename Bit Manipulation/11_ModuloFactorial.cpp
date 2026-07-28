#include<iostream>
#include<vector>

using namespace std;

vector<long long int> factorial(int n){
    vector<long long int> fact(n+1, 1);
    int mod = 1000000000 + 7;
    for(int i = 2; i <= n; i++){
        fact[i] = ((i % mod) * (fact[i-1] % mod)) % mod;
        // (a * b) % c = (a%c * b%c)%c
    }
    return fact;
}


int main(){

    vector <long long int > res = factorial(25);
    for (int i = 0; i < res.size(); i++){
        cout << i << "! = " <<res[i] << "\n";
    }


    return 0;
}


// # Note --->

// (a + b) % c = (a%c + b%c)%c 

// (a - b) % c = (a%c - b%c +c)%c

// (a * b) % c = (a%c * b%c)%c
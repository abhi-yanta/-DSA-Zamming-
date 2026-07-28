#include<iostream>
#include<cmath>


using namespace std;

// # Method 1:
void printFactors(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0) cout << i << " ";
    }
}


// # Method 2: 
void printFactors1(int n){
    for(int i = 1; i < sqrt(n); i++){
        if(n % i == 0) cout << i << " ";
    }
    for(int i = sqrt(n); i >= 1; i--){
        if(n % i == 0) cout << n/i << " ";
    }
}


int main(){
    printFactors(60) ;
    cout << endl;
    printFactors1(60);
    return 0;
}
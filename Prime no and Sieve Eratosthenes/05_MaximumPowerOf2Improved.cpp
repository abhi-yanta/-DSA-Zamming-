#include<iostream>

using namespace std;

// # Problem :--
//   Given an interger n, find the maximum power of two 
//    that is smaller than n.


int maxPowerOf2(int n){
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);

    // return (n + 1) / 2;
    return (n+1) >> 1;
} 
    
   
int main(){

    int maxPow = maxPowerOf2(45);
    cout << maxPow << endl;;

    
    int pow = 0;
    while (maxPow > 0){
        pow ++;
        maxPow = maxPow/2;
    }

    cout << pow << endl;




    return 0;
}
#include<iostream>

using namespace std;

// # Problem :--
//   Given an interger n, find the maximum power of two 
//    that is smaller than n.


int main(){


    int x = 45;
    int temp;
    while(x != 0){
        temp = x;
        x = (x & (x - 1));
    }

    cout << temp << endl;

    int pow = 0;
    while (temp > 0){
        pow ++;
        temp = temp/2;
    }

    cout << pow << endl;

    return 0;
}
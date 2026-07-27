#include<iostream>

using namespace std;

// # Problem:-
//   Given an integer array where every element occurs twice 
//   excepts only once. Find the unique elements.

//   Basic approach of it --
//   (2^3^4^5^4^3^2) = 5

int main(){

int arr[] = {2,3,4,5,4,3,2};
int n = 7;
int res = 0;
for(int i = 0; i < n; i++){
    res = res ^ arr[i];
}

cout << res << endl;


    return 0;
}
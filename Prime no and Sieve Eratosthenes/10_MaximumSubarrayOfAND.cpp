#include<iostream>
#include<climits>


using namespace std;

// # Problem:---
//   Given an integer array. Find the length of longest subarray
//   which has maximum possible bitwise AND value.

// Basic approach to this prblm is that AND of two number is smaller than the smaller number.


int main(){

    int arr[] = {12,18,18,5,6,6,6,1,6,6,6,6,8,3,13,13,13,13,7};
    int n = 19;
    int ans = 0;
    int max_el = INT_MIN;
    int count  =0;
    for (int i = 0; i < n; i++){
        if(arr[i] > max_el){
            max_el = arr[i];
            count = 1;
            ans = max(ans, count);
        }
        else if(arr[i] == max_el){
            count ++;
        }
        ans = max(ans, count); 

    }
    cout << ans << " ";

    return 0;
}
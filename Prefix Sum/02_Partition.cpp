#include<iostream>
#include<vector>

// #Problem:
// Check if array can be partitioned int two continuous 
// array of equal sum.

using namespace std;

int main(){


    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
     for(int i = 1; i < n; i++){
        arr[i] += arr[i-1];
     }
     int idx = -1;
     for(int i = 1; i < n; i++){
        if(2*arr[i] == arr[n-1]) {
        idx = i;
        break;
        }
     }
     if(idx != -1) cout << "Yes, it can be partitioned after " << idx << endl;
     else cout << "It can't be partitioned!" << endl;


    return 0;
}
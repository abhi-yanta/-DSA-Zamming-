#include<iostream>

using namespace std;

int main(){

    int arr[] = {3,5,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int i = 0;
    while(i < n){
        int correctidx = arr[i]-1;
        if(i == correctidx) i++;
        else swap(arr[i], arr[correctidx]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}

// #Note-->

// 1. Time Complexity - O(n) 
// 2. Where to use - given array of[0,n] or [n,0] or work between 0 to n is done.
// Used in counting array (like 1,2,3,4,5)
// 3. Space Complexity - O(1)

// Worst noumber of swaps in cyclic sort for an length n: (n-1)
// if(n-1) are swaps then last left are already sorted.
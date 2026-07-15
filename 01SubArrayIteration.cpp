// # SUBARRAY -->
//  Vo Subsequence jo ki continuous fashion me ho.

#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    int arr[] = {1,2,3};
    int n = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 0; i < n; i++){ // start of subarray 
        for (int k = i; k < n; k++){ // K only denotes no. of rounds ina loops
            for (int j = i; j <= k; j++){
                cout << arr[j] ;
            }
            cout << endl;
        }
    }



    return 0;
}
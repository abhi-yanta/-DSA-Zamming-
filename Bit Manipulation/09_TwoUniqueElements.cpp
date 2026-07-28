#include<iostream>

using namespace std;

// # Problem:--
//   Given an integer array nums,in which exactly two elements 
//   appers only once and all the other elements appers exactly twice.
//   Find the two elements that appears only once.


void findUnique(int *arr, int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res = res ^ arr[i];
    }
    int temp = res;
    int k = 0;
    while(true){
        if((temp & 1) == 1){
            break;
        }
    
        temp = temp >> 1; 
        k++;
    }
    
    int retval = 0;
    for(int i = 0; i < n; i++){
        int num = arr[i];
        if(((num >> k) & 1) == 1){
            retval ^= num;
        }
    }
    cout << retval << " ";
    res = retval ^ res;
    cout << res << " ";

}

int main(){

    int arr[] = {3,4,5,6,4,3};
    int n = 6;

    findUnique(arr,n);

    return 0;
}
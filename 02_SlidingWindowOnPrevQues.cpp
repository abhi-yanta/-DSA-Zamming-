#include<iostream>
#include<climits>

using namespace std;

int main(){

    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = 0;
    int prevSum = 0;
    for(int i = 0; i < k; i++){ // no of ope = k
        prevSum += arr[i];
    }
    maxSum = prevSum;
    int i = 1;
    int j = k;
    while( j < n){ // no of ope = n - k
        int currSum = prevSum + arr[j] - arr[i-1];
        if(maxSum < currSum){
            maxSum = currSum;
            maxIdx = i ;
        }
        prevSum = currSum;
        i++;
        j++;
    }

    cout << maxIdx << endl;
    cout << maxSum << endl;



    // Total Time Complexity = O(n)
    return 0;
}
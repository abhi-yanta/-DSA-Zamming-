#include<iostream>
#include<vector>


// #Problem:
// Given an array nums. We define a running sum of an array 
// as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums.

using namespace std;

vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i < n; i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }

int main(){

    int arr[] = {2,5,3,4,6,7};
    int n =  sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    runningSum(v);
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }


    return 0;
}
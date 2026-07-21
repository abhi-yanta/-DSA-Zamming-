#include<iostream>
#include<vector>

// # Problem:-
// Given an unsorted integer array nums. Return the smallest positive integer \
// that is not present in nums.

// You must implement an algorithm 
// that runs in O(n) time and uses O(1) auxiliary space.

using namespace std;
int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n){
            //int correctidx = nums[i]-1;
            if(nums[i] <= 0 || nums[i] > n || nums[i] == i+1 || nums[nums[i]-1] == nums[i]) i++;
            else swap(nums[nums[i]-1], nums[i]);
        }
        for(int i = 0; i < n; i++){
            if(nums[i] != i+1) return i+1;
        }
        return n+1;
    }

int main(){

    int arr[] = {-1,4,2,1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
    }

    cout << firstMissingPositive(v) << endl;

    return 0;
}
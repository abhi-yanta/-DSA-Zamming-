#include<iostream>
#include<vector>

// # Problem:-
// Given an array of integers nums containing n + 1 integers 
// where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, 
// return this repeated number.

// You must solve the problem without modifying the array nums 
// and using only constant extra space.

using namespace std;

int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        while(i < len){
            int correctidx = nums[i];
            if(nums[correctidx] == nums[i]) return nums[i];
            else swap(nums[i], nums[correctidx]);
        }
        return 1000;
}

int main(){

    int nums[] = {3,4,1,5,2,5};
    int n =  sizeof(nums)/ sizeof(nums[0]);
    vector<int> v;
    for(int i = 0; i < n; i++){
        v.push_back(nums[i]);
    }

    cout << findDuplicate(v) << endl;
    


    return 0;
}
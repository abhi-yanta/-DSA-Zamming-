#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int n = nums.size();
        int i = 0; 
        int j = 0;
        int count = 0;
        int product = 1;
         while(j < n){
            product *= nums[j];
            while(product >=  k){
                count += (j-i);
                product /= nums[i];
                i++;
            }
            j++;
        }
        while(i < n){
             count += (j-i);
                product /= nums[i];
                i++;
        }
        return count;
    
    }

int main(){

    vector<int> nums = {10,5,2,6};
    int k = 100;

    cout << numSubarrayProductLessThanK(nums, k);

    return 0;
}

// # Note -- >

//     Explanation: The 8 subarrays that have product less than 100 are:
//     [10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
//     Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.
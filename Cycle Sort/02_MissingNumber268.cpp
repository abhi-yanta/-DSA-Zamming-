#include<iostream>
#include <vector>


using namespace std;

// #Problem :- 
// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.


int missingNumber(vector<int>& nums) {

    //    Method 1: Extra Space
    //  int n = nums.size();
    //  vector<bool> check(n+1, false) ;
    //  for(int i = 0; i < n; i++){
    //     int ele = nums[i];
    //     check[ele] = true;
    //  }  
    //  for(int i = 0;i <= n; i++){
    //     if(check[i] == false) return i;
    //  }
    //  return 100;

    // Method 2 : Cycle Sort
    
     int n = nums.size();
     vector<bool> check(n+1, false) ;

     int i = 0;

     while (i < n){
        int correctidx = nums[i];
        if(correctidx == i || nums[i] == n) i++;
        else swap (nums[i],  nums[correctidx]);
     }  
     for(int i = 0;i < n; i++){
        if(nums[i] != i) return i;
     }
     return n;

     // Method 3: Total Sum

    //  int n = nums.size();
    //  int acctualsum = (n*(n+1))/2;
    //  int sum = 0;
    //  for(int i = 0; i < n; i++){
    //     sum += nums[i];
    //  }
    //  return acctualsum - sum;

    }

int  main(){

    int arr[] = {4,5,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> v;
    for(int i = 0; i < n; i++){
        v.push_back(arr[i]);
    }
    cout << missingNumber(v);

    return 0;
}
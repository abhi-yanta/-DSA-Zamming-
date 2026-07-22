#include<iostream>
#include<vector>


// #Problem :
// Given an integer array nums, return an array answer such that answer[i] 
// is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

using namespace std;

// #Method 1: Division Algo 

// vector <int > produxtExceptSelf ( vector <int> &nums){
//     int n = nums.size();
//     int product = 1;
//     int p2 = 1;
//     int noz = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] == 0) noz++;
//         product *= nums[i];
//         if(nums[i] != 0) p2 *= nums[i];
//     }
//     if(noz > 1) p2 = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] == 0) nums[i] = p2;
//         else nums[i] = product / nums[i];
//     }
//     return nums;
// }


// #Method 2: Prefix and suffix sum

// #Concept Behind : 
//     For every element :
//      Product of all other element = product of all in left part * product of all in right part. 
//      (in case of nothing in left or right go with one 1)

vector <int > produxtExceptSelf ( vector <int> &nums){

    int n =  nums.size();
    vector <int> pre(n);
    vector <int> suff(n);
    //prefix product array:
    int p = nums[0];
    pre[0] = 1;
    for(int i = 1; i < n; i++){
        pre[i] = p;
        p *= nums[i];
    }
    // suffix product array:
    p = nums[n-1];
    suff[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        suff[i] = p;
        p *= nums[i];
    }

    //pre[i] = pre[i] * suff[i]

    for(int i = 0; i < n; i++){
        pre[i] = pre[i] * suff[i];
    }


    return pre;
}


int main(){
    
    vector<int> v = {2, 3, 1, 4, 5};
    int n = v.size();
    vector<int> result = produxtExceptSelf(v);

    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }

    // for (int x : result) {
    //     cout << x << " ";
    // }
    cout << '\n';

    return 0;
}

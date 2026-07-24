#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        int flips = 0, i = 0, j = 0;
        int maxLen = INT_MIN, len = INT_MIN; 
        while(j < n){
            if(nums[j] == 1) j++;
            else {
                if(flips < k) {
                    flips++;
                    j++;
                }
                else{// flips == k 
                // Calculate len
                len = j - i;
                maxLen = max(maxLen,len);
                // i ko just uske aage wale zero se ek index aage lee jao.
                    while(nums[i] == 1) i++;// after this 100% nums[i] = 0;
                    i++;
                    j++;
                }
            }
        }
        len = j - i;
        maxLen = max(maxLen,len);
        return maxLen - 1;
    }

int main(){
 
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    

    int maxLen =  longestSubarray(nums);
    cout << maxLen;

    return 0;
}

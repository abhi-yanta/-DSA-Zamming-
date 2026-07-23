#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n =  nums.size();
        int m =  queries.size();
        vector<int> ans(m);
        // sort
        sort(nums.begin(), nums.end()); // T.C - O(nlogn) S.C - O(logn)
        // prefix sum
        for(int i = 1; i < n; i++) { // T.C - O(logn) // ignored with O(nlogn)
            nums[i] += nums[i-1];
        }
        for (int i = 0; i < m; i++) { // T.C - O(m*n)
            int maxlen = 0;
            // method 1: Not Efficient
            // for (int j = 0; j < n; j++){
            //     if(nums[j] > queries[i]) break;
            //     maxlen++;

            // Method 2:
            int lo = 0;
            int hi = n - 1;
            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] > queries[i])
                    hi = mid - 1;
                else {
                    maxlen = mid + 1;
                    lo = mid + 1;
                }
            }
            ans[i] = maxlen;
        }
        return ans;
    }
    // Total Time Complexity - O(nlogn + m*n);
    // Total Time Complexity - O((m+n)logn);


int main(){


    vector <int> nums = {4,5,2,1};
    vector <int> queries  = {3,10,21};

    int n = nums.size();
    int m = queries.size();

    vector<int> ans = answerQueries(nums, queries);

    for(int i = 0; i < m; i++){
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}
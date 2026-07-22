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
            int len = 0;
            for (int j = 0; j < n; j++){
                if(nums[j] > queries[i]) break;
                len++;
            }
            ans[i] = len ;
        }
        return ans;
    }
    // Total Time Complexity - O(nlogn + m*n).


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
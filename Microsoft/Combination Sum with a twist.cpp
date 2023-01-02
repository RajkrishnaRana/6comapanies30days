class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &combi, vector<int> &nums, int tar, int k, int i) {
        //base case
        if (i >= nums.size()) {
            if (tar == 0 && combi.size() == k) {
                ans.push_back(combi);
                return;
            }
            return;
        }

        if (nums[i] <= tar) {
            combi.push_back(nums[i]);
            solve (combi, nums, tar - nums[i], k, i + 1);
            combi.pop_back();
        }
        solve (combi, nums, tar, k, i + 1);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<int> combi;
        solve (combi, nums, n, k, 0);
        return ans;
    }
};

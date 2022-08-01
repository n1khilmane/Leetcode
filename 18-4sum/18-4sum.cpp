class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = nums.size() - 1; i > 2; i--) {
            if (i < nums.size() - 1 && nums[i] == nums[i + 1]) continue;
            for (int j = i - 1; j > 1; j--) {
                if (j < i - 1 && nums[j] == nums[j + 1]) continue;
                int l = 0, r = j - 1;
                while (l < r) {
                    long int sum = (long)nums[l] + nums[r] + nums[i] + nums[j];
                    if (sum == target) {
                        ans.push_back({nums[l], nums[r], nums[i], nums[j]});
                        int num_left = nums[l], num_right = nums[r];
                        while (l < r && nums[l] == num_left) l++;
                        while (l < r && nums[r] == num_right) r--;
                    }
                    else {
                        sum < target ? l++ : r--;
                    }
                }
            }
        }
        return ans;
    }
};
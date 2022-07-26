class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        long long max_ = sum;
        for (int i = k; i < n; i++) {
            sum = sum - nums[i - k] + nums[i];
            max_ = max(sum, max_);
        }
        
        return (max_*1.0) / k;
    }
};
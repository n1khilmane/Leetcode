class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int right = 0;
        int left = 0;
        int n = nums.size();
        long long sum = 0;
        int maxf = 0;
        
        while (right < n) {
            sum += nums[right];
            
            while ((long long)(right - left + 1) * nums[right] > sum + k) {
                sum -= nums[left];
                left++;
            }
            
            maxf = max(maxf, right - left + 1);
            right++;
        }
        
        return maxf;
    }
};

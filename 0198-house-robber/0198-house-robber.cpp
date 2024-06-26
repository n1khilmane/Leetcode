class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return solve(dp,nums,0);
        
    }
    
    int solve(vector<int>& dp, vector<int>& nums, int idx)
    {
        if(idx >= nums.size()) return 0;
        
        if(dp[idx]!=-1) return dp[idx];
        
        dp[idx] = max(solve(dp,nums,idx+1), nums[idx] + solve(dp,nums,idx+2));
        
        return dp[idx];
    }
};
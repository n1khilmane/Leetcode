class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int> dp(n+1,-1);
        return minimum(cost,n,dp);
        
    }
    
    int minimum(vector<int>& cost, int n, vector<int>& dp)
    {
        if(n==0 || n==1) return 0;
        
        if(dp[n]!=-1) return dp[n];
        
        dp[n] = min(cost[n-1] + minimum(cost,n-1,dp), cost[n-2] + minimum(cost,n-2,dp));
        
        return dp[n];
    }
};
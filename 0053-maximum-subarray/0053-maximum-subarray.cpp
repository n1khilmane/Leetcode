class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currentsum = 0;
        int maxi = nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            if(currentsum<0)
                currentsum = 0;
            currentsum = currentsum + nums[i];
            maxi = max(currentsum,maxi);
            
        }
        
        return maxi;
        
    }
};
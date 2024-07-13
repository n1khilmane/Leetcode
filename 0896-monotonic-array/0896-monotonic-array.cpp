class Solution {
    bool check(vector<int> nums)
    {
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1] > nums[i])
            {
                return false;
            }
        }
        return true;
    }
public:
    bool isMonotonic(vector<int>& nums) {
        bool ans = false;
        ans = check(nums);
        if(ans)
        {
            return true;
        }
        reverse(nums.begin(),nums.end());
        ans = check(nums);
        return ans;
    }
};
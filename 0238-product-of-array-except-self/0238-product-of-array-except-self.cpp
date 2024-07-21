class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n,0);
        vector<int> pre(n,0);
        pre[0] = 1;
        vector<int> post(n,0);
        post[n-1] = 1;

        for(int i=1;i<n;i++)
        {
            pre[i] = nums[i-1]*pre[i-1];
        }

        for(int i=n-2;i>=0;i--)
        {
            post[i] = nums[i+1]*post[i+1];
        }

        for(int i=0;i<n;i++)
        {
            ans[i] = pre[i]*post[i];
        }

        return ans;
        
    }
};
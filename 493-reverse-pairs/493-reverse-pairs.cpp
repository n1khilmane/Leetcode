class Solution {
public:
    
    int merger(vector<int> &nums,int l,int m,int r)
    {
        int ans=0;
        for(int i=l,j=m+1;i<=m;i++)
        {
            while(j<=r && nums[i]>2LL*nums[j]) j++;
            ans+= (j-m-1);
        }
        inplace_merge(nums.begin()+l,nums.begin()+m+1,nums.begin()+r+1); //notice the m+1 and r+1
        return ans;
    }
    
    int merge(vector<int> &nums,int l,int r)
    {
        if(l>=r) return 0;
        int ans=0;
        int m=l+(r-l)/2;
        ans+=merge(nums,l,m);
        ans+=merge(nums,m+1,r);
        ans+=merger(nums,l,m,r);
        return ans;
    }
    int reversePairs(vector<int>& nums) {
        return merge(nums,0,nums.size()-1);
    }
};
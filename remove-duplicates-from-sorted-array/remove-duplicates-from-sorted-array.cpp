class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int,int> mp;
        int n = nums.size();
        map<int,int>::iterator itr;
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i])!=mp.end())
                mp[nums[i]]=0;
            
            mp[nums[i]]++;
        }
        int i=0;
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            
            nums[i]=itr->first;
            i++;
        }
        for(int i=mp.size()+1;i<n;i++)
            nums[i]=0;
        
        return mp.size();
        
    }
};
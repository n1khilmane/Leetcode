class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;
       // map<int, int>::iterator itr;
        int n = nums.size();
        vector<int> v1;
        int k;
        
        for(int i=0;i<n;i++)
        {
            k = target - nums[i];
            
            if(mp.find(k) != mp.end())
            {
                v1.push_back(mp[k]);
                v1.push_back(i);
                return v1;
            }
            
            mp[nums[i]]=i;
        }
        return v1;
        
        
    }
};
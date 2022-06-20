class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        unordered_map<int,int>:: iterator itr;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            
            mp[nums[i]]++;
            
            
        }
       
        for(itr = mp.begin(); itr!=mp.end(); itr++)
        {
            if(itr->second >1)
                return true;
        }
        
        return false;
        
        
    }
};
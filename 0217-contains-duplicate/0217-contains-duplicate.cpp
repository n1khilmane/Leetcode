class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int> ump;

        for(int i=0;i<nums.size();i++)
        {
            ump[nums[i]]++;
        }

        for(auto itr = ump.begin();itr!=ump.end();itr++)
        {
            if(itr->second >= 2) return true;
        }

        return false;
        
    }
};
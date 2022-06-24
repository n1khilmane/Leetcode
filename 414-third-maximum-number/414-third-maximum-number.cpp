class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
//         unordered_map<int,int> mp;
//         unordered_map<int,int>:: iterator itr;
        
//         for(int i=0;i<nums.size();i++){
            
//             mp[nums[i]]++;
            
//         }
        
//         for(i)
        
        set<int> s;
        for(int i = 0; i < nums.size(); ++i)
        {
            s.insert(nums[i]);
            if(s.size() > 3) s.erase(s.begin()); 
        }
        
        auto it = s.begin();
        if(s.size() == 2) ++it;
        return *it;
        
        
    }
};
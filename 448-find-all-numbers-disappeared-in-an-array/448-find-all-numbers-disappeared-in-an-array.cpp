class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     
        int n = nums.size();
        map<int,int> mp;
        vector<int> v1;

        for(int i=0;i<n;i++){
            
            mp[nums[i]]++;
            
        }
        
        for(int i=1;i<=n;i++){
            
            if(mp[i]==0)
                v1.push_back(i);
        }
        
        return v1;
            
        
        
        
    }
};
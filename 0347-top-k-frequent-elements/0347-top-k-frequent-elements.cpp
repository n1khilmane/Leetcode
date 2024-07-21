class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
        }
        
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            pq.push(make_pair(itr->second, itr->first));
        }
        
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
        
    }
};
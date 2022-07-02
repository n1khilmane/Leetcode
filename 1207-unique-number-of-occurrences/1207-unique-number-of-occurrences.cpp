class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        unordered_map<int,int>::iterator itr;
        vector<int> ans;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            ans.push_back(itr->second);
        }
        
        sort(ans.begin(), ans.end());
        
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==ans[i+1])
                return false;
        }
        
        return true;
        
        
    }
};
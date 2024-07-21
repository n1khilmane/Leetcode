class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        map<map<char,int>, vector<string>> mp;
        
        for(int i=0;i<strs.size();i++)
        {
            map<char,int> temp;
            
            for(auto c:strs[i])
            {
                temp[c]++;
            }
            
            mp[temp].push_back(strs[i]);
            
        }
        
        
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans.push_back(mp[itr->first]);
        }
        
        return ans;
    }
};
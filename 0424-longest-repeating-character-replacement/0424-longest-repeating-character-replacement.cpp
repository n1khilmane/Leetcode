class Solution {
public:
    int characterReplacement(string s, int k) {
        

        int left = 0;
        
        int maxf = 0;
        int res = 0;
        
        unordered_map<char,int> mp;
        
        for(int right = 0; right<s.size();right++)
        {
            mp[s[right]]++;
            
            maxf = max(maxf, mp[s[right]]);
            
            if(right-left+1 - maxf > k)
            {
                mp[s[left]]--;
                left++;
            }
            
            res = max(res, right-left+1);
        }
        
        return res;
        
        
        
    }
};
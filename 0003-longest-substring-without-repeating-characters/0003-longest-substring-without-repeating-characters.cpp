class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left = 0;
        int right = 0;
        
        int n = s.size();
        int ans = 0;
        unordered_set<char> st;
        
        while(right<n)
        {
            if(st.find(s[right]) == st.end())
            {
                st.insert(s[right]);
                right++;
                ans = max(ans,right-left);
            }
            
            else{
                st.erase(s[left]);
                left++;
                
            }
            
            
        }
        
        return ans;
        
    }
};
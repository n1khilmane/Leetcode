class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        
        unordered_set<int> st;
        int current = 0;
        int count = 0;
        int maxlen = 0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                current = nums[i];
                count = 1;
                
                while(st.find(current+1)!=st.end())
                {
                    current = current+1;
                    count++;
                    
                }
                
                maxlen = max(maxlen,count);
            }
        }
        
        return maxlen;
        
    }
};
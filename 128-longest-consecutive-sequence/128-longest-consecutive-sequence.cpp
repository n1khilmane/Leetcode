class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> st;
        for(int num:nums)
        {
            st.insert(num);
        
        }
        
        int lgstreak=0;
        
        for(int num:nums){
            
            if(!st.count(num-1)){
                
                int currentnum = num;
                int currentstreak = 1;
                
                while(st.count(currentnum+1)){
                    
                    currentnum += 1;
                    currentstreak += 1;
                }
                
                lgstreak = max(lgstreak,currentstreak);
            }
        }
        
        return lgstreak;
    }
};
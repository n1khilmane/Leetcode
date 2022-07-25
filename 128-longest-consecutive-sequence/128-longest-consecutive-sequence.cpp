class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> hashset;
        
        
        //insert all the elements into the hashset
        for(int num:nums)
            hashset.insert(num);
        
        //initialize a variable to store longest streak
        int longstreak;
        
        
        //if the number is the smallest one in the set then we increment it by 1 till we find its max 
        for(int num:nums)
        {
            
            if(!hashset.count(num-1))
            {
                int currnum = num;
                int currentstreak = 1;
                
                while(hashset.count(currnum+1)){
                    currnum += 1;
                    currentstreak += 1; 
                }
                
                longstreak = max(longstreak,currentstreak);
                
            }
            
        }
        
        return longstreak;
        
    }
};
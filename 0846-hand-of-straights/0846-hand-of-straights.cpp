class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        map<int,int> mp;
        int n = hand.size();
        
        for(int i=0;i<n;i++)
        {
            mp[hand[i]]++;
        }
        
        sort(hand.begin(),hand.end());
        
        for(int i=0;i<n;i++)
        {
            if(mp[hand[i]]==0) continue;
            
            for(int j=0;j<groupSize;j++)
            {
                int currhand = hand[i] + j;
                
                if(mp[currhand]==0) return false;
                
                mp[currhand]--;
            }
        }
        return true;
    }
};
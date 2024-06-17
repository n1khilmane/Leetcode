class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = 0;
        int n= piles.size();
        for(int i=0;i<n;i++)
        {
            high = max(high,piles[i]);
        }
        
        int res = high;
        
        while(low <= high)
        {
            int k = low + (high-low)/2;
            long int hours = 0;
            
            for(int i=0;i<n;i++)
            {
                hours += ceil((double)piles[i]/k);
            }
            
            if(hours<=h)
            {
                res = min(res,k);
                high = k-1;
            }
            else{
                low = k +1;
            }
        }
        
        return res;
        
        
    }
};
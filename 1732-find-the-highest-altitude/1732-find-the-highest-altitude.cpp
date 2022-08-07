class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int maxi = gain[0] ;
        int altitude = gain[0];
        int res;
        
        for(int i=1;i<gain.size();i++)
        {
            altitude = altitude + gain[i];
            maxi = max(maxi,altitude);
            
        }
        
        if(maxi<0)
            return 0;
        
        return maxi;
    }
};
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int maxi=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                maxi = i+1;
            }
            else if(arr[i]>arr[i+1])
            {
                return maxi;
            }
        }
        
        return maxi;
        
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //consider 3 pointers 
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        
        
        // 3 conditions which needs to be checked 
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            
            else if(nums[mid]==1)
            {
                mid++;
            }
            
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};
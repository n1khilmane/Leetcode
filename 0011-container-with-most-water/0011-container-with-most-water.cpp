class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int cur = 0;
        int ans = 0;
        
        int left = 0;
        int right = height.size()-1;
        
        while(left<right)
        {
            cur = (right-left) * min(height[right],height[left]);
            
            ans = max(cur, ans);
            
            if(height[left]<height[right])
            {
                left++;
            }
            
            else{
                right--;
            }
        }
        
        return ans;
        
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;
        
        int current = 0, ans = 0;
        
        while(i<j)
        {
            current = (j-i)*min(height[i],height[j]);
            ans = max(ans,current);
            
            if(height[i]>=height[j])
                j--;
            else
                i++;
        }
        
        return ans;
        
    }
};
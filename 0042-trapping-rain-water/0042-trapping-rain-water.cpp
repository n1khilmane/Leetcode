class Solution {
public:
    int trap(vector<int>& height) {


        int n = height.size();
        vector<int> maxleft(n);
        maxleft[0] = 0;
        vector<int> maxright(n);
        maxright[n-1] = 0;
        vector<int> minlr(n);
        int count = 0;

        for(int i=1;i<height.size();i++)
        {
            maxleft[i] = max(maxleft[i-1],height[i-1]);
        }

        for(int i=n-2;i>=0;i--)
        {
            maxright[i] = max(maxright[i+1],height[i+1]);
        }

        for(int i=0;i<height.size();i++)
        {
            int k =  min(maxleft[i],maxright[i]) - height[i];

            if(k<0) minlr[i] = 0;
            else minlr[i] = k;

            count = count + minlr[i];
        }

        return count;
        
    }
};
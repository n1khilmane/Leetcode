class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> st;
        
        for(int i=0;i<n;i++)
        {
            int currday = i;
            int currtemp = temperatures[i];
            
            while(!st.empty() && st.top().second < currtemp)
            {
                int prevday = st.top().first;
                int prevtemp = st.top().second;
                st.pop();
                
                ans[prevday] = currday-prevday;
            }
            
            st.push({currday, currtemp});
        }
        
        return ans;
        
    }
};
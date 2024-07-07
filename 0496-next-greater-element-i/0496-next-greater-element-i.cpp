class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> mp;
        vector<int> ans;
        vector<int> temp;
        stack<int> st;
        int n = nums2.size();
        
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0) temp.push_back(-1);
            
            else if(st.size() > 0 && st.top()>nums2[i])
            {
                temp.push_back(st.top());
                
            }
            
            else{
                while(st.size() >0 && st.top()<nums2[i])
                {
                    st.pop();
                }
                
                if(st.size()==0) temp.push_back(-1);
                else temp.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        
        reverse(temp.begin(),temp.end());
        
        for(int i=0;i<n;i++)
        {
            mp[nums2[i]]=temp[i];
        }
        
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(mp[nums1[i]]);
        }
        
        return ans;
        
        
        
    }
};
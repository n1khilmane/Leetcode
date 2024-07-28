class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n2 = nums2.size();
        stack<int> st;
        unordered_map<int, int> mp; // key - nums2[i], value - next greater in nums2[i]
        
        // Iterate over nums2 from the end to the beginning
        for (int i = n2 - 1; i >= 0; --i) {
            int num = nums2[i];
            
            // Maintain the stack to store elements in a decreasing order
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }
            
            // If stack is not empty, the top element is the next greater element
            if (!st.empty()) {
                mp[num] = st.top();
            } else {
                mp[num] = -1; // No greater element found
            }
            
            st.push(num); // Push the current element to the stack
        }
        
        // Fill the answer for elements in nums1 using the map
        for (int num : nums1) {
            ans.push_back(mp[num]);
        }
        
        return ans;
    }
};

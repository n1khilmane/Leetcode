class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int l = m-n;
        for(int i=l;i<m;i++)
            nums1.pop_back();
        for(int i=0;i<n;i++)
            nums1.push_back(nums2[i]);
        int k = nums1.size();
        sort(nums1.begin(),nums1.end());
        
    }
};
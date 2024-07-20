class Solution {
public:
    int reverse(int x) {
        vector<int> ans;
        
        while(x != 0) {
            int k = x % 10;
            ans.push_back(k);
            x = x / 10;
        }
        
        int n = ans.size();
        long long m = 0; // Use long long to prevent overflow
        for(int i = 0; i < n; i++) {
            m = m * 10 + ans[i];
            if (m > INT_MAX || m < INT_MIN) {
                return 0; // Return 0 in case of overflow
            }
        }
        return static_cast<int>(m);
    }
};
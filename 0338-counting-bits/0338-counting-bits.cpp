class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1, 0);
        
        for (int i = 1; i <= n; i++) {
            //                 i / 2      i % 2
            result[i] = result[i / 2] + (i % 2);
        }
        
        return result;
    }
};
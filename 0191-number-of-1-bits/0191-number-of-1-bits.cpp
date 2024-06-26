class Solution {
public:
    int hammingWeight(int n) {
        

        int bit = 0;
        int result = 0;
        
        while (n != 0) {
            bit = n & 1;
            if (bit == 1) {
                result++;
            }
            n = n >> 1;
        }
        
        return result;

        
    }
};
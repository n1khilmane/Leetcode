class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for (auto num : arr) {
            if (count == 3) return true;
            count = num % 2 ? count + 1 : 0;
        }
        return count == 3;
    }
};
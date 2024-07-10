class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> initial_state(nums);
        vector<vector<int>> output;
        do {
            output.emplace_back(nums);
            nextPermutation(nums);
        } while (nums != initial_state);
        return output;
    }
private:
    void nextPermutation(vector<int>& nums) {
        if (size(nums) <= 1) return;
        auto pos = 0;
        for (int i = size(nums) - 2; i >= 0; --i) {
            if (nums[i] < nums[i + 1]) {
                pos = i;
                break;
            }
        }
        for (int i = size(nums) - 1; i >= pos; --i) {
            if (nums[pos] < nums[i]) {
                swap(nums[i], nums[pos]);
                ++pos;
                break;
            }
        }
        reverse(begin(nums) + pos, end(nums));
    }
};
class Solution {
public:
int findLengthOfLCIS(vector<int>& nums) {
        int ans = 0, cnt = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] >= nums[i + 1]){ 
                ans = max(ans, cnt);
                cnt = 0;
            }
            cnt++;
        }
        ans = max(ans, cnt);
        return ans;
    }
};
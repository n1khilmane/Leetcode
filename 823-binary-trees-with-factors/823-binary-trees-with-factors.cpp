class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n= arr.size();
        vector<long long> dp(n,1);
        int mod= 1e9+7;
        
        sort(arr.begin(),arr.end());
        
        //element --> index
        unordered_map<int,int> mp;
        
        for(int i=0;i<n; i++)
            mp[arr[i]] = i;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(arr[i]%arr[j]==0) {
                    int quo = arr[i]/arr[j];
                    if(mp.count(quo)) {
                        dp[i] += dp[j] * dp[mp[quo]];
                    }
                }
            }
        }
        
        long long result = 0;
        for(auto &ele : dp) {
            result += ele;
        }
        
        return result%mod;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int left = 0;
        int right = 1;
        
        int profit = 0;
        int maxprofit = 0;
        
        while(right<prices.size()){
            
            if(prices[left]<prices[right])
            {
                profit = prices[right] - prices[left];
                maxprofit = max(profit, maxprofit);
            }
            else{
                left = right;
            }
            right++;
            
        }
        return maxprofit;
        
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int overall_profit = 0;
        int profit_sold_today = 0;
        int least_buy_price = INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<least_buy_price)
                least_buy_price = prices[i];
            
            profit_sold_today = prices[i]-least_buy_price;
            
            if(profit_sold_today>overall_profit)
                overall_profit = profit_sold_today;
        }
        
        return overall_profit;
        
        
    }
};
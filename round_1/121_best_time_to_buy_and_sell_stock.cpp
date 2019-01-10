class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        int profit = 0;
        int sell = prices[0];
        for(int i=0; i<prices.size();i++)
        {
            profit = max(profit, prices[i]-sell);
            sell = min(sell, prices[i]);
        }
        return profit;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int price = prices[0];
        for(int i = 0;i<n;i++)
        {
            profit = max(profit,prices[i] - price);
            price = min(price,prices[i]);
        }
        return profit;
    }
};
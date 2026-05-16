class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int bp = INT_MAX;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            if(bp > prices[i])
            bp = prices[i];
            else {
                profit = max(profit , prices[i] - bp);
            }
        }
        return profit;
    }
};

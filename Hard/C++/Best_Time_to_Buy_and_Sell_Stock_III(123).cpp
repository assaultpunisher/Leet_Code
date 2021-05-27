class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> left(prices.size(), 0), right(prices.size(), 0);
        
        int minValue = prices[0], maxValue = prices.back(), res = 0;
        
        //Calculate maximum profit that can be made until current index from left
        for(int i = 1; i < prices.size(); i++)
        {
            minValue = min(minValue, prices[i]);
            left[i] = max(left[i-1], prices[i] - minValue);
        }
        
        //Calculate maximum profit that can be made until current index from right
        for(int i = prices.size() - 2; i >= 0; i--)
        {
            maxValue = max(maxValue, prices[i]);
            right[i] = max(right[i+1], maxValue - prices[i]);
        }
        
        for(int i = 0; i < left.size(); i++)
            res = max(res, left[i] + right[i]);
        
        return res;
    }
};
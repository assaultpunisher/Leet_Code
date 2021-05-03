class Solution {
    //profit on ith day is min cp uptil i-1
    public int maxProfit(int[] prices) {
        if(prices.length<=1)
            return 0;
        int cp=prices[0],profit=0;
        for(int i=1;i<prices.length;i++)
        {
            int sp=prices[i];
            if(sp-cp > profit)
                profit=sp-cp;
            else if(sp<cp)
                cp=sp;
        }
        return profit;
    }
}
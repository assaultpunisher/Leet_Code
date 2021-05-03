class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        total = 0
        buy = prices[0]
        
        for p in prices:
            if p < buy:
                buy = p
            elif p > buy:
                total += p - buy
                buy = p
                
        return total
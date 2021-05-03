class Solution:
  def maxProfit(self, prices: List[int]) -> int:
    l,r = 0, 0
    
    result = 0
    for i, price in enumerate(prices):
      profit = prices[r] - prices[l]
      
      if profit < 0:
          l,r = i, i
      else:
        result = max(result, profit)
      r += 1
    
    return result
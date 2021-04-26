class Solution:
    def coinChange(self, coins, amount):
        if not coins or len(coins) == 0 or amount < 0:
            return -1
        
        n = len(coins)
        dp = [sys.maxsize] * (amount + 1)
        dp[0] = 0
        
        for i in range(1, amount + 1):
            for j in range(n):
                last_index = i - coins[j]
                if last_index < 0 or dp[last_index] == sys.maxsize:
                    continue
                dp[i] = min(dp[i], dp[last_index] + 1)
        
        if dp[amount] == sys.maxsize:
            return -1
        
        return dp[amount]
        
class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        
        const int INF = 0x3f3f3f3f;
        int *dp = new int[amount + 1]();
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            dp[i] = INF;
            for (auto &coin : coins) {
                if (i >= coin && dp[i - coin] != INF) {
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return dp[amount] == INF ? -1 : dp[amount];
    }
};
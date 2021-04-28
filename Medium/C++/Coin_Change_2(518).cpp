class Solution {
public:
	int change(int amount, vector<int>& c) {
		ios::sync_with_stdio(false);
		vector<int> dp(amount+1);
		dp[0] = 1;
		for(auto a : c){
			for(int i = a ; i <= amount ; ++i)
				dp[i] += dp[i-a];
		}
		return dp[amount];
    }
};
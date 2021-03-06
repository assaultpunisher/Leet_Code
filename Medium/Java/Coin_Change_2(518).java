public class Solution {
    public int change(int amount, int[] coins) {
        int[][] results = new int[coins.length + 1][amount + 1];
        
        results[0][0] = 1;
      
        for (int i = 1; i <= coins.length; i++) {
            results[i][0] = 1;
            
            for (int j = 1; j <= amount; j++) {
                results[i][j] = results[i-1][j] + (j >= coins[i-1] ? results[i][j - coins[i-1]] : 0);
            }
        }
        
        return results[coins.length][amount];
    }
}
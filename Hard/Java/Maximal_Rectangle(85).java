class Solution {
    
    public int maximalRectangle(char[][] matrix) {
        
        if (matrix.length==0) return 0;
        
        int m = matrix.length, n = matrix[0].length, result = 0;
        int[][] dp = new int[m][n];
        
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j]=='1')
                    dp[i][j] = i==0 ? 1 : dp[i-1][j] + 1;
            }
        }
        
        for (int i=0; i<m; i++)
            result = Math.max(result, largestRectangleArea(dp[i]));
        
        return result;
    }
    
    private int largestRectangleArea(int[] heights) {
        
        Stack<Integer> stack = new Stack<>();
        int n = heights.length, i=0, res = 0;
        
        while (i<n || !stack.isEmpty()) {
            
            while (!stack.isEmpty() && (i==n || heights[i]<heights[stack.peek()])) {
                int topElementIndex = stack.pop();
                int startIndex = stack.size()==0 ? 0 : stack.peek() + 1;
                int area = heights[topElementIndex] * (i-startIndex);
                res = Math.max(res, area);
            }
            
            if (i<n) stack.push(i);
            i++;
        }
        
        return res;
    }
}
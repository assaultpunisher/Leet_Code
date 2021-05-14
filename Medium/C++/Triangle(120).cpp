class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
      int height=triangle.size();
      int length=triangle[height-1].size();
      int dp[height][length];
      for(int i=0;i<length;i++) dp[height-1][i]=triangle[height-1][i];
       int len;
      for(int i=height-2;i>=0;i--)
      {
          len=i+1;
          for(int j=0;j<len;j++)
          {
              dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
          }
      }
      return dp[0][0];
    }
};
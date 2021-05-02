class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++)
        {
            vector<int> r1(i+1,1);
            res.push_back(r1);
            if(i>=2)
            {
                for(int j=1;j<i;j++)
                {
                    res[i][j]=res[i-1][j-1]+res[i-1][j];
                }
            }
        }
        return res;
    }
};
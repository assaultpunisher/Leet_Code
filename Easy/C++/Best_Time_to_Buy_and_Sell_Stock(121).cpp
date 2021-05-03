class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int ans=0, mx=-2;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>mx)
                mx=a[i];
            else
            {
                if(mx-a[i]>ans)
                    ans=mx-a[i];
            }
        }
        return ans;
    }
};
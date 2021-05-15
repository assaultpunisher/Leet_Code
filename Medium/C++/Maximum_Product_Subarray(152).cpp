class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int current=1;
        int ans=INT_MIN;  
        for(int i=0;i<n;i++)
        {
            current=current*nums[i];
            ans=max(ans,current);
            
            if(nums[i]==0)
                current=1;
        }
      
        current=1;  
        for(int i=n-1;i>=0;i--)
      {
          current=current*nums[i];
          ans=max(ans,current);
           
          if(nums[i]==0)
            current=1;   
         
      }
      
        return ans;
    }
};
class Solution { 
    public int maxSubArray(int[] nums) {
        int curr_sum = nums[0];
        int max_sum = curr_sum;
        
        if(nums.length == 1) return nums[0];
        
        for(int i = 1; i < nums.length; i++)
        {
            curr_sum = Math.max(curr_sum + nums[i], nums[i]);
            
            max_sum = Math.max(curr_sum, max_sum);
        }
        return max_sum;
    }
}
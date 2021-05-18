class Solution {
    public void rotate(int[] nums, int k) {
        k = k%nums.length; // if k > nums.length
        
        // reverse 1st half
        reverse(nums, 0, nums.length-k-1);
        
        // reverse 2nd half
        reverse(nums, nums.length-k, nums.length-1);
        
        // reverse whole array
        reverse(nums, 0, nums.length-1);
    }
    
    public void reverse(int[] nums, int i, int j){
        int li = i;
        int ri = j;
        
        while(li < ri){
            int temp = nums[li];
            nums[li] = nums[ri];
            nums[ri] = temp;
            
            li++;
            ri--;
        }
    }
}
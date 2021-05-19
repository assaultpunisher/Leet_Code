class Solution {
    public int[] productExceptSelf(int[] nums) {
        if (nums == null || nums.length == 0) return nums;
        int[] res = new int[nums.length];
        
        int p = 1;
        for (int i = 0; i < nums.length; i++) {
            res[i] = p;
            p = p * nums[i];
        }
        
        p = 1;
        for (int i = nums.length - 1; i >= 0; i--) {
            res[i] *= p;
            p = p * nums[i];
        }
        return res;
    }
}
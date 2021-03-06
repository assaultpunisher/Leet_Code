class Solution {
    public int firstMissingPositive(int[] nums) {
        for (int i=0; i<nums.length; i++) {
            nums[i] = nums[i] <= 0 ? nums.length + 10 : nums[i];
        }
        for (int i=0; i<nums.length; i++) {
            if (Math.abs(nums[i]) <= nums.length) {
                nums[Math.abs(nums[i])-1] = -1*Math.abs(nums[Math.abs(nums[i])-1]);
            }
        }
        for (int i=0; i<nums.length; i++) {
            if (nums[i] > 0) {
                return i+1;
            }
        }
        return nums.length + 1;
    }
}
class Solution {
    public int thirdMax(int[] nums) {
        long max = Long.MIN_VALUE;
        long secondMax = max, thirdMax = max;
        
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > max) {
                thirdMax = secondMax;
                secondMax = max;
                max = nums[i];
            } else if (nums[i] > secondMax && nums[i] != max) {
                thirdMax = secondMax;
                secondMax = nums[i];
            } else if (nums[i] > thirdMax && nums[i] != max && nums[i] != secondMax) {
                thirdMax = nums[i];
            }
        }
            
        return (int) (thirdMax == Long.MIN_VALUE ? max : thirdMax);
    }
}
class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        if (nums == null || nums.length == 0) {
            throw new IllegalArgumentException();
        }
        int len = nums.length;
        int slow = 0;
        int sum = 0;
        int minLen = len + 1;
        for (int fast = 0; fast < len; fast++) {
            sum += nums[fast];
            while (sum >= target) {
                minLen = Math.min(minLen, fast - slow + 1);
                sum -= nums[slow++];
            }
        }
        return minLen <= len ? minLen : 0;
    }
}
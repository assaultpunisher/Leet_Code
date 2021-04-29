class Solution {
    public void moveZeroes(int[] nums) {
	int shift_count = 0;
	for (int i = 0; i < nums.length; i++) {
		if (nums[i] != 0) {
			nums[shift_count++] = nums[i];
		}
	}
	for (int i = shift_count; i < nums.length; i++) {
		nums[i] = 0;
	}
    }
}
class Solution {
    public int searchInsert(int[] nums, int target) {
        int index;
        for(index = 0; index < nums.length; index++)
        {
            if(nums[index] >= target) break;
        }
        return index;
    }
}
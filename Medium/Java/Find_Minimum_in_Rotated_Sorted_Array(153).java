class Solution {
    public int findMin(int[] nums) {
	    int last = nums[nums.length - 1];
	    for(int i = 0; i < nums.length; i++)
	    {
		    if (nums[i] <= last)
		    {
			    return nums[i];
		    }
	    }
        return -1;
    }
}
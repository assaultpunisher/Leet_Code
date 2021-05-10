class Solution {
public:
    int findMin(vector<int>& nums)
    {
	    int last = nums[nums.size() - 1];
	    for(int i = 0; i < nums.size(); i++)
	    {
		    if (nums[i] <= last)
		    {
			    return nums[i];
		    }
	    }
        return -1;
    }
};